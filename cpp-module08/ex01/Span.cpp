#include "Span.hpp"

Span::Span()
{
	std::cout << "[SPAN] constructor called." << std::endl;
}

Span::Span(unsigned int N) :  index(0), max_size(N), max_val(INT_MIN), min_val(INT_MAX)
{
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	if (this == &obj)
		return (*this);
	this->spanner.clear();
	this->spanner = obj.spanner;
	return (*this);
}

Span::~Span()
{
	std::cout << "[SPAN] Destructor called." << std::endl;
}

void	Span::addNumber(int value)
{
	if (index > max_size - 1)
		throw std::runtime_error("max size reached. cant add more numbers.");
	this->spanner.push_back(value);
	this->index++;
	if (value > max_val)
		max_val = value;
	if (value < min_val)
		min_val = value;
	
}

int	Span::longestSpan( void )
{
	if (spanner.size() <= 1)
		throw std::runtime_error("Only one or no numbers found in the container.");
	return (max_val - min_val);
}

int	Span::shortestSpan( void )
{
	if (spanner.size() <= 1)
		throw std::runtime_error("Only one or no numbers found in the container.");
	std::sort(spanner.begin(), spanner.end());
	int	shortest = spanner[1] - spanner[0];
	for (size_t i = 0; i < spanner.size() - 1; ++i)
	{
		if ((spanner[i + 1] - spanner[i]) < shortest)
				shortest = spanner[i + 1] - spanner[i];
	}
	return (shortest);
}
