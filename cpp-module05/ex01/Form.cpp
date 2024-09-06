/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:14:03 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:40:59 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
	this->isSigned = false;
	if (this->signGrade < 1 || this->execGrade < 1)
		throw GradeTooHighException();
	if (this->signGrade > 150 || this->execGrade > 150)
		throw GradeTooLowException();
	std::cout << "[Form] constructor called.\n";
}


Form::Form(const Form &cref) : name(cref.getName()), signGrade(cref.getsignGrade()), execGrade(cref.getexecGrade())
{
	*this = cref;
}

Form &Form::operator=(const Form &cref)
{
	this->isSigned = cref.isSigned;
	return (*this);
}

Form::~Form()
{
	std::cout << "[Form] destructor called.\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("[Form]: highest grade cannot be less than 1.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("[Form]: lowest grade cannot be more than 150 or lower than signGrade.");
}

std::string Form::getName(void) const
{
	return(this->name);
}

int	Form::getsignGrade(void) const
{
	return (this->signGrade);
}

int	Form::getexecGrade(void) const
{
	return(this->execGrade);
}

void	Form::beSigned(const Bureaucrat &cref)
{
	if (cref.getGrade() <= this->getsignGrade())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

bool	Form::signStatus(void) const
{
	return (this->isSigned);
}

std::ostream& operator<<(std::ostream& out, const Form &cref)
{
	out << "---------------------------------------" << std::endl;
	out << "[Form Information]" << std::endl;
	out << "name: " << cref.getName() << std::endl;
	out << "sign status: " << cref.signStatus() << std::endl;
	out << "sign grade: " << cref.getsignGrade() << std::endl;
	out << "exec grade: " << cref.getexecGrade() << std::endl;
	out << "---------------------------------------" << std::endl;
	return (out);
}
