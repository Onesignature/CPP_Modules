#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T, typename Func>
void	iter(T &a, size_t len, Func plusfive)
{
	for (size_t i = 0; i < len; i++)
	{
		plusfive(a[i]);
	}
}

template<typename T>
void	plusfive(T &a)
{
	a += 5;
}

template<typename T>
void	printer(T &a, size_t len)
{
	size_t	i = 0;
	while (a[i] && i < len)
		std::cout << a[i++] << " ";
	std::cout << std::endl;
}

# endif