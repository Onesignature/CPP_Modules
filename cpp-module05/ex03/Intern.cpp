/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:35:49 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:42:39 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
	std::cout << "[Intern] constructor called.\n";
}

Intern::~Intern()
{
	std::cout << "[Intern] constructor called.\n";
}

Intern::Intern(const Intern &cref)
{
	*this = cref;
}

Intern &Intern::operator=(const Intern &cref)
{
	(void)cref;
	return(*this);
}

AForm	*Intern::makeForm(std::string name, const std::string target)
{
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm	*form = NULL;

	for (int i = 0; i < 3; i++)
	{
	if (name == forms[i])
	{
		switch(i)
		{
			case 0:
				form = new PresidentialPardonForm(target);
				break;
			case 1:
				form = new RobotomyRequestForm(target);
				break;
			case 2:
				form = new ShrubberyCreationForm(target);
				break;
		}
	}
	}
	if (form == NULL)
		std::cout << "[Intern] " << name << "Form doesnt exist" << std::endl;
	else
		std::cout << "Intern created " << name << std::endl;
	return (form);
}
