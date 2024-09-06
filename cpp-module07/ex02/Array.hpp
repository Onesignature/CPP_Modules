#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T> 
class Array
{
	private:
		T	*a;
		unsigned int	len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &obj);
		Array<T> &operator=(const Array<T> &obj);
		~Array();
		T &operator[](unsigned int i);
		unsigned int size() const;

};

# include "Array.tpp"

# endif