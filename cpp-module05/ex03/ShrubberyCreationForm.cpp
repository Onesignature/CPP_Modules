/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:09:44 by bsaeed            #+#    #+#             */
/*   Updated: 2023/08/17 00:50:49 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCF", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cref) : AForm(cref.getName(), cref.getsignGrade(), cref.getexecGrade())
{
	*this = cref;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cref)
{
	this->target = cref.target;
	return (*this);
}

const char *ShrubberyCreationForm::FileException::what() const throw()
{
	return ("[SCF] unable to create file.");
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	isFormSigned(executor);
	std::string new_target = target + "_shrubbery";
	std::ofstream out_file(new_target.c_str(), std::ios::out | std::ios::trunc);
	if (out_file.is_open())
	{
		out_file << TREE;
		out_file.close(); // Close the file after writing
		std::cout << "File written successfully.\n";
	}
	else
		throw FileException();
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}
