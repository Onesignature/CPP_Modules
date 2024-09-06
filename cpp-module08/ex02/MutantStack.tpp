#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	//std::cout << "MutantStack constructor called." << std::endl;
}


template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
	//std::cout << "MutantStack copy constructor called." << std::endl;
	*this = obj;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
	//std::cout << "MutantStack copy assignement operator called." << std::endl;
	if (this != obj)
		this = obj;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	//std::cout << "MutantStack destructor called." << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

# endif