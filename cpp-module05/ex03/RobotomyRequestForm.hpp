#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &cref);
		RobotomyRequestForm(const RobotomyRequestForm &cref);
		~RobotomyRequestForm();
		void	execute(const Bureaucrat &executor) const;
		std::string	getTarget(void) const;
};

# endif
