#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm> // for std::find
# include <stdexcept> // for std::runtime_error
# include <vector>


template <typename T>
void easyfind(const T& a, int value)
{
    typename T::const_iterator it = a.begin();
    typename T::const_iterator ite = a.end();

    if (std::binary_search(it, ite, value))
        std::cout << "Value found!" << std::endl;
    else
        throw std::runtime_error("Value not found in the container!");
}

template <typename T>
int	getLength(T &a)
{
	return a.size();
}

# endif