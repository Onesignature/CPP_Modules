# include "RPN.hpp"

RPN::RPN()
{
	//std::cout << "RPN Default constructor called." << std::endl;
}

RPN::RPN(const RPN &obj)
{
    *this = obj;
}

RPN &RPN::operator=(const RPN &obj)
{
    this->numbers = obj.numbers;
    this->operators = obj.operators;
    this->operation = obj.operation;
    return (*this);
}

RPN::~RPN()
{
	//std::cout << "RPN Default destructor called." << std::endl;
}

void	RPN::doTheMagic(std::string args)
{
	if (!is_valid_expression(args) || !is_valid_operator(args))
	{
		std::cerr << "Error" << std::endl;
		exit(EXIT_FAILURE);
	}
    fillStack(args);
}

void    RPN::calculate()
{
    int a = numbers.top();
    numbers.pop();
    int b = numbers.top();
    numbers.pop();
    char operate = operators.top();
    operators.pop();

    if (operate == '+')
        numbers.push(b + a);
    else if (operate == '-')
        numbers.push(b - a);
    else if (operate == '*')
        numbers.push(b * a);
    else
        numbers.push(b / a);
}

void    RPN::fillStack(std::string args)
{
    unsigned int i = 0;

    while (i < args.size())
    {
        if (args[i] != ' ')
        {
            if (isdigit(args[i]) != 0)
                numbers.push(args[i] - '0');
            else
                operators.push(args[i]);
            if (numbers.size() >= 2 && operators.size() == 1)
                calculate();
        }
        i++;
    }
    std::cout << numbers.top() << std::endl;
}

bool RPN::is_valid_expression(const std::string& input_string) 
{

    const std::string valid_chars = "0123456789*/+- ";
    
    for (std::string::const_iterator it = input_string.begin(); it != input_string.end(); ++it) {
        if (valid_chars.find(*it) == std::string::npos) {
            return false;
        }
    }
    return true;  // All characters are valid
}

bool RPN::is_valid_operator(std::string str)
{
    if (str.find('+') == std::string::npos && str.find('/') == std::string::npos
        && str.find('-') == std::string::npos && str.find('*') == std::string::npos)
        return (false);
    return (true);
}