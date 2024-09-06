/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:35:20 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:35:21 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		AForm *SCF = new ShrubberyCreationForm("home");
		Bureaucrat b1("Bob", 136);
		Bureaucrat b2("Jhon", 145);
		b2.signForm(*SCF);
		b1.execForm(*SCF);

		b2.execForm(*SCF);
		delete SCF;
	}

	catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		AForm *SCF = new RobotomyRequestForm("home");
		Bureaucrat b1("Bob2", 44);
		Bureaucrat b2("Jhon2", 72);
		b2.signForm(*SCF);
		b1.execForm(*SCF);

		b2.execForm(*SCF);
		delete SCF;
	}

	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		AForm *SCF = new PresidentialPardonForm("home");
		Bureaucrat b1("Bob2", 5);
		Bureaucrat b2("Jhon2", 24);
		b2.signForm(*SCF);
		b1.execForm(*SCF);

		b2.execForm(*SCF);
		delete SCF;
	}

	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
