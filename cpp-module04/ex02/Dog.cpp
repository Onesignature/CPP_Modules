/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:27:35 by bsaeed            #+#    #+#             */
/*   Updated: 2023/11/21 20:44:48 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor" << std::endl;
	type = obj.type;
	brain = new Brain(*obj.brain);
}

Dog	Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignement operator" << std::endl;
	type = obj.type;
	brain = new Brain(*obj.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (brain);
}
