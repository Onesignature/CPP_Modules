#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cref)
{
	this->target = cref.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cref) : AForm(cref.getName(), cref.getsignGrade(), cref.getexecGrade())
{
	*this = cref;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	isFormSigned(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

