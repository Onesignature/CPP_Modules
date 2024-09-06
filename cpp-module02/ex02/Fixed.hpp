#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					fpn;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &old_obj);
		Fixed(const float num);
		Fixed(const int num);
		~Fixed();

		Fixed	operator=(const Fixed &old_obj);
		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );

		//ex01
		float	toFloat( void ) const;
		int		toInt( void ) const;
		void	setRawBits( float const raw );

		//ex02
		//Comparison overloaders
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		//Arithmetic overloaders
		Fixed	operator+( const Fixed &obj ) const;
		Fixed	operator-( const Fixed &obj ) const;
		Fixed	operator*( const Fixed &obj ) const;
		Fixed	operator/( const Fixed &obj ) const;

		//Increment/Decrement Overloaders
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );

		//Max & Min overloaders
		static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
