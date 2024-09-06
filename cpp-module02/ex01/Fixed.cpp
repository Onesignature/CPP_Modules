#include "Fixed.hpp"

//All kinds of Constructors

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
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

Fixed::Fixed(const int num)
{
	std::cout << "int constructor called" << std::endl;
	this->setRawBits(num);
	return ;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(num);
	return ;
}

//EX00


Fixed	Fixed::operator=(const Fixed &old_obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fpn = old_obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn);
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->fpn = raw << bits;
}

//EX01

std::ostream& operator<<(std::ostream& os, const Fixed &src)
{
	os << src.toFloat();
	return os;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fpn / (float)(1 << this->bits));
}

void    Fixed::setRawBits( float const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->fpn = round(raw * (1 << this->bits));

}

int	Fixed::toInt( void ) const
{
	return (this->fpn >> this->bits);
}

