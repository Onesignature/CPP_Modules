#include <iostream>

int main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	while (av[++i])
	{
		j = 0;
		while (av[i][j])
			putchar(toupper(av[i][j++]));
	}
	std::cout << std::endl;
	return (0);
}
