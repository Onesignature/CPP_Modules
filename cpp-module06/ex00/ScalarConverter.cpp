#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "[CONVERTER] default constructor called." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "[CONVERTER] default destructor called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	std::cout << "[CONVERTER] copy constructor called." << std::endl;
	*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	std::cout << "[CONVERTER] copy assignement operator called." << std::endl;
	(void)obj;
	return (*this);
}

void ScalarConverter::toChar(std::string arg) 
{
    char ch = 0;

    if (arg.length() == 1 && !isdigit(arg[0])) 
		ch = arg[0];
	else 
	{
        int base = 10;
        char *endptr = nullptr;
        const long long num = std::strtoll(arg.c_str(), &endptr, base);
        std::cout << "ascii value of character: " << num << std::endl;
        if (endptr == arg.c_str() || *endptr != '\0') {
            std::cerr << "char: impossible" << '\n';
            return;
        }

        if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()) {
            std::cerr << "char: out of range" << '\n';
            return;
        }

        ch = static_cast<char>(num);
    }

    if (isprint(ch))
        std::cout << "char: '" << ch << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::toInt(std::string arg) 
{
    int num = 0;

    if (arg.length() == 1 && !isdigit(arg[0])) {
        num = static_cast<int>(arg[0]);
    } 
    else 
    {
        int base = 10;
        char *endptr = nullptr;
        const long long num2 = std::strtoll(arg.c_str(), &endptr, base);

        if (endptr == arg.c_str() || *endptr != '\0') {
            std::cerr << "int: impossible" << '\n';
            return;
        }

        if (num2 < std::numeric_limits<int>::min() || num2 > std::numeric_limits<int>::max()) {
            std::cerr << "int: out of range" << '\n';
            return;
        }

        num = static_cast<int>(num2);
    }

    std::cout << "int: " << num << std::endl;
}

void	ScalarConverter::toFloat(std::string arg)
{
	float num = 0;
	if (arg.length() == 1 && !isdigit(arg[0]))
		num = static_cast<float>(arg[0]);
	else
		num = std::atof(arg.c_str());
	if (num - static_cast<int>(num) == 0)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

void	ScalarConverter::toDouble(std::string arg)
{
	double num = 0;
	if (arg.length() == 1 && !isdigit(arg[0]))
		num = static_cast<double>(arg[0]);
	else
		num = std::atof(arg.c_str());
	if (num - static_cast<int>(num) == 0)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}

void	ScalarConverter::convert(std::string arg)
{
	toChar(arg);
	toInt(arg);
	toFloat(arg);
	toDouble(arg);
}
