#pragma once

#include <stack>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &obj);
		MutantStack &operator=(const MutantStack &obj);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
};

# include "MutantStack.tpp"