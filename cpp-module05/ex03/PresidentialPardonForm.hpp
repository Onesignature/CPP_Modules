#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &cref);
		PresidentialPardonForm(const PresidentialPardonForm &cref);
		~PresidentialPardonForm();
		void	execute(const Bureaucrat &executor) const;
		std::string	getTarget(void) const;
};


# endif
