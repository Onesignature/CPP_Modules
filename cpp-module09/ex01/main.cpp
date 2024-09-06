# include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error." << std::endl;
		std::cerr << "Usage: ./RPN <numbers>" << std::endl;
		return (1);
	}
	RPN nums;
	nums.doTheMagic(av[1]);
	return (0);
}