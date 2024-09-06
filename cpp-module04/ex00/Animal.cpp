/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:12:36 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/15 19:43:13 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor" << std::endl;
	type = obj.type;
}

Animal Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignement operator" << std::endl;
	type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (type);
}

void Animal::makeSound() const{
	std::cout << "Animal making animal sound" << std::endl;
	return ;
}
