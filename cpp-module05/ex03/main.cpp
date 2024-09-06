/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:51:01 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:30:18 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern		someRandomIntern;
	Bureaucrat	B("Joseph", 4);
	AForm*		form;

	//Form from example, printing target name for example purposes.
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	delete form;

	form = someRandomIntern.makeForm("shrubbery creation", "home");
	delete form;

	form = someRandomIntern.makeForm("presidential pardon", "Intern");
	delete form;


	form = someRandomIntern.makeForm("PPF", "wrong");
	delete form;

	return (0);
}
