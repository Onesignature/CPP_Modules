# pragma once

# include <iostream>
# include <stack>
# include <iterator>
# include <list>
# include <stdlib.h>

class RPN
{
	private:
		std::stack<int, std::list<int> >	numbers;
		std::stack<char, std::list<char> >	operators;
		char								operation;

	public:
		RPN();
		RPN(const RPN &obj);
		RPN &operator=(const RPN &obj);
		~RPN();

		void	doTheMagic(std::string args);
		void	fillStack(std::string args);
		void	calculate();
		bool	is_valid_expression(const std::string& input_string);
		bool	is_valid_operator(std::string str);
};
