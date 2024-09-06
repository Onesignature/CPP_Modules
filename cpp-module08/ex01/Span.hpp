#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <iterator>
# include <algorithm>
# include <climits>

class Span
{
	private:
		std::vector<int> 	spanner;
		unsigned int		index;
		unsigned int		max_size;
		int					max_val;
		int					min_val;
		
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();

		void addNumber(int value);
		int	shortestSpan( void ) ;
		int	longestSpan( void ) ;
};

# endif