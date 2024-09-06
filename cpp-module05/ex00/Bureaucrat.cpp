/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:56:53 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:39:16 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
	std::cout << "[Bureaucrat] constructor called.\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Highest grade cannot be less than 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Lowest grade cannot be more than 150.");
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}


void	Bureaucrat::incGrade(void)
{
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decGrade(void)
{
	grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &cref)
{
	out << cref.getName() << ", bureaucrat grade " << cref.getGrade() << std::endl;
	return(out);
}

