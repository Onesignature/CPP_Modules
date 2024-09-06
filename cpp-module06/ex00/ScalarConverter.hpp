/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:17:46 by bsaeed            #+#    #+#             */
/*   Updated: 2023/09/07 00:09:32 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <math.h>
# include <cstdlib>
# include <ctype.h>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator=(const ScalarConverter &obj);
		
	public:
		~ScalarConverter();
		static void		convert(std::string arg);
		static void		toChar(std::string arg);
		static void		toInt(std::string arg);
		static void		toFloat(std::string arg);
		static void		toDouble(std::string arg);
};

# endif