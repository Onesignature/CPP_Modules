# include "PmergeMe.hpp"

bool	is_arg_digit(char **argv)
{
	int i = 1;

	while (argv[i])
	{
		int j = 0;
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
				return (false);
			j++;
		}
		i++;
	}
	return(true);
}

int main(int ac, char **av)
{
    if (ac < 3 || !is_arg_digit(av))
    {
        std::cerr << "Error" << std::endl;
        exit(EXIT_FAILURE);
    }
    PmergeMe sort(av);
	//sort.printVector();
}