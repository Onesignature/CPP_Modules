/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:35:26 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:35:27 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cref)
{
	this->target = cref.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cref) : AForm(cref.getName(), cref.getsignGrade(), cref.getexecGrade())
{
	*this = cref;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	isFormSigned(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
