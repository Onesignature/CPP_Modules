# include "PmergeMe.hpp"

/*CONSTRUCTORS AND DESTRUCTORS*/

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **av)
{
	fillContainers(av);

    clock_t start, finish;
    start = clock();
	vecSort();
    finish = clock();
    double  vec_time = ((double)(finish - start)) / 1000000;
    std::cout << "After: "; printVector();
    std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector --> " << std::fixed << vec_time << std::endl;
    start = clock();
    deqSort();
    finish = clock();
    double  deq_time = ((double)(finish - start)) / 1000000;
    std::cout << "Time to process a range of " << this->_deq.size() << " elements with std::deque --> " << std::fixed << deq_time << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    this->_vec = obj._vec;
    this->_deq = obj._deq;
    return (*this);
}

PmergeMe::~PmergeMe(){}

void	PmergeMe::fillContainers(char **av)
{
	int	i = 1;

	std::cout << "Before: ";
	while (av[i])
	{
		this->_vec.push_back(atoi(av[i]));
		this->_deq.push_back(atoi(av[i]));
		std::cout << " " << av[i];
		i++;
	}
	std::cout << "\n";
}

//*VECTOR SORTS

void	PmergeMe::printVector()
{
	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::insertVec(int left, int right)
{
    for (int i = left + 1; i <= right; i++) 
    {
        int key = this->_vec[i];
        int j = i - 1;
        while (j >= left && this->_vec[j] > key) {
            this->_vec[j + 1] = this->_vec[j];
            j--;
        }
        this->_vec[j + 1] = key;
    }
}

void	PmergeMe::mergeVec(int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = this->_vec[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = this->_vec[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            this->_vec[k] = leftArr[i];
            i++;
        } else {
            this->_vec[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        this->_vec[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        this->_vec[k] = rightArr[j];
        j++;
        k++;
    }
}

void	PmergeMe::mergeInsertionVec(int left, int right, int insertionThreshold) 
{
    if (left < right) {
        if (right - left + 1 <= insertionThreshold) {
            insertVec(left, right);
        } else {
            int mid = left + (right - left) / 2;
            mergeInsertionVec(left, mid, insertionThreshold);
            mergeInsertionVec(mid + 1, right, insertionThreshold);
            mergeVec(left, mid, right);
        }
    }
}

void	PmergeMe::vecSort()
{
	this->mergeInsertionVec(0, this->_vec.size() - 1, 5);
}

//*DEQUE 

void	PmergeMe::printDeque()
{
	for (std::deque<int>::iterator it = this->_deq.begin(); it != this->_deq.end(); it++)
	{
		std::cout << *it << " ";

	}
	std::cout << std::endl;
}

void PmergeMe::insertDeq(int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = this->_deq[i];
        int j = i - 1;
        while (j >= left && this->_deq[j] > key) {
            this->_deq[j + 1] = this->_deq[j];
            j--;
        }
        this->_deq[j + 1] = key;
    }
}

// Function to perform the merge step of merge sort
void PmergeMe::mergeDeq(int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::deque<int> leftArr(n1);
    std::deque<int> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = this->_deq[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = this->_deq[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            this->_deq[k] = leftArr[i];
            i++;
        } else {
            this->_deq[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        this->_deq[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        this->_deq[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to perform the merge-insertion hybrid sort
void PmergeMe::mergeInsertionDeq(int left, int right, int insertionThreshold) 
{
    if (left < right) {
        if (right - left + 1 <= insertionThreshold) {
            insertDeq(left, right);
        } else {
            int mid = left + (right - left) / 2;
            mergeInsertionDeq(left, mid, insertionThreshold);
            mergeInsertionDeq(mid + 1, right, insertionThreshold);
            mergeDeq(left, mid, right);
        }
    }
}

void	PmergeMe::deqSort()
{
	this->mergeInsertionDeq(0, this->_deq.size() - 1, 5);
}

