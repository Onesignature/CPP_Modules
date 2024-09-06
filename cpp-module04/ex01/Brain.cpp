/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:28:45 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/16 04:01:59 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor" << std::endl;

	for (int i = 0; i < 100; i++)
		ideas[i] = obj.getIdea(i);
}

Brain Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment operator" << std::endl;

	for (int i = 0; i < 100; i++)
		ideas[i] = obj.getIdea(i);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 100)
	{
		std::cout << "Invalid Index" << std::endl;
		return (" ");
	}
	return (ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	ideas[i] = idea;
}
