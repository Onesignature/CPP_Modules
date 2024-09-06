/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:35:02 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/19 16:35:03 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Form f1("bank", 0, 140);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Form form("Kambucha", 35, 12);
		Bureaucrat bureaucrat("Jacke", 33);
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Brown", 33);
		Form form("loyalty", 33, 12);
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Helen", 50);
		Form form("supermarket", 49, 12);
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------------" << std::endl;
	{
		Bureaucrat bureaucrat("Finn", 44);
		Form form("submission", 43, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
}
