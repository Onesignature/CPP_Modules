#include "RobotomyRequestForm.hpp"
#include <ostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cref)
{
	this->target = cref.target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cref) : AForm(cref.getName(), cref.getsignGrade(), cref.getexecGrade())
{
	*this = cref;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	isFormSigned(executor);
	system("say -v Luca DRILL NOISES");
	std::srand(std::time(0)); // Seed the random number generator with current time
	bool flipCoin = std::rand() % 2 == 0;
	if (flipCoin)
		std::cout << this->target << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}
