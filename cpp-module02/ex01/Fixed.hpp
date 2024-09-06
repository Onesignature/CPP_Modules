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
		float			toFloat( void ) const;
		int				toInt( void ) const;
		void			setRawBits( float const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
