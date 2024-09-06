#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern (const Intern &cref);
		Intern &operator=(const Intern &cref);
		AForm *makeForm(std::string name, std::string target);
};

# endif
