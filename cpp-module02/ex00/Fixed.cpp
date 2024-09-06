#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fpn = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fpn = old_obj.getRawBits();
}

Fixed	Fixed::operator=(const Fixed &old_obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fpn = old_obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fpn = raw;
}
