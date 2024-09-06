/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:14:03 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/14 01:58:02 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <fstream>

AForm::AForm(std::string name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
	this->isSigned = false;
	if (this->signGrade < 1 || this->execGrade < 1)
		throw GradeTooHighException();
	if (this->signGrade > 150 || this->execGrade > 150)
		throw GradeTooLowException();
	std::cout << "[AForm] constructor called.\n";
}


AForm::AForm(const AForm &cref) : name(cref.getName()), signGrade(cref.getsignGrade()), execGrade(cref.getexecGrade())
{
	*this = cref;
}

AForm &AForm::operator=(const AForm &cref)
{
	this->isSigned = cref.isSigned;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "[AForm] destructor called.\n";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("[AForm]: highest grade cannot be less than 1.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("[AForm]: lowest grade cannot be more than 150.");
}

const char *AForm::NotSigned::what() const throw()
{
	return ("[AForm] is not signed.");
}

std::string AForm::getName(void) const
{
	return(this->name);
}

int	AForm::getsignGrade(void) const
{
	return (this->signGrade);
}

int	AForm::getexecGrade(void) const
{
	return(this->execGrade);
}

void	AForm::beSigned(const Bureaucrat &cref)
{
	if (cref.getGrade() <= this->getsignGrade())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

bool	AForm::signStatus(void) const
{
	return (this->isSigned);
}

void	AForm::isFormSigned(const Bureaucrat &cref) const
{
	if (this->isSigned)
	{
		if (this->getexecGrade() < cref.getGrade())
			throw GradeTooLowException();
	}
	else
		throw NotSigned();
}

std::ostream& operator<<(std::ostream& out, const AForm &cref)
{
	out << "---------------------------------------" << std::endl;
	out << "[AForm Information]" << std::endl;
	out << "name: " << cref.getName() << std::endl;
	out << "sign status: " << cref.signStatus() << std::endl;
	out << "sign grade: " << cref.getsignGrade() << std::endl;
	out << "exec grade: " << cref.getexecGrade() << std::endl;
	out << "---------------------------------------" << std::endl;
	return (out);
}
