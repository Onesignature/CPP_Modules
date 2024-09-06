# include "easyfind.hpp"

int main()
{
	int					value;	
	std::vector<int>	arr;
	arr.push_back(1);
    arr.push_back(2);
    arr.push_back(43);
    arr.push_back(6);
    arr.push_back(9);

	std::cout << "Enter a value to search in the vector: ";
	std::cin >> value;

	try
	{
		easyfind(arr, value);
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Size of vector is = " << arr.size() << std::endl;
	
}