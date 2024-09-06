# include "swapper.hpp"

int	parse(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "incorrect num of arguments\n";
		return (1);
	}

	std::ifstream file;
	file.open(av[1]);
	if (!file)
	{
		std::cout << "File does not exist\n";
		return (1);
	}
	file.close();
	return (0);
}

int main(int ac, char **av)
{
	if (parse(ac, av) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	else
	{
		size_t			pos;
		std::string		line;
		std::string		s1(av[2]);
		std::string		s2(av[3]);
		std::ifstream	infile;
		std::ofstream	outfile;

		infile.open(av[1]);
		outfile.open(std::string(av[1]) + ".replace", std::fstream::out);
		if (outfile.fail())
		{
			std::cout << "Output file creation failed\n";
			return (EXIT_FAILURE);
		}

		while (std::getline(infile, line))
		{
			pos = line.find(s1);
			while (pos != SIZE_MAX)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos++;
				pos = line.find(s1, pos);
			}
			outfile << line << std::endl;
		}
		infile.close();
		outfile.close();
		return (EXIT_SUCCESS);
	}
}
