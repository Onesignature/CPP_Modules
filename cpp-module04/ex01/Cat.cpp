/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:27:35 by bsaeed            #+#    #+#             */
/*   Updated: 2023/11/21 20:43:51 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor" << std::endl;
	type = obj.type;
	brain = new Brain(*obj.brain);
}

Cat	Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignement operator" << std::endl;
	type = obj.type;
	brain = new Brain(*obj.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (brain);
}
