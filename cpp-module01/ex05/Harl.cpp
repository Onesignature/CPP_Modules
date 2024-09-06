# include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
	return ;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	return ;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
	return ;
}


void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	return ;
}

void Harl::complain( std::string level )
{
std::string complaint[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
void (Harl::*ft_ptr[4])(void);
ft_ptr[0] = &Harl::debug;
ft_ptr[1] = &Harl::info;
ft_ptr[2] = &Harl::warning;
ft_ptr[3] = &Harl::error;

	switch (std::find(complaint, complaint + 4, level) - (complaint))
	{
		case 0:
			(this->*ft_ptr[0])();
			break;
		case 1:
			(this->*ft_ptr[1])();
			break;
		case 2:
			(this->*ft_ptr[2])();
			break;
		case 3:
			(this->*ft_ptr[3])();
			break;
		default:
			std::cout << "Case not found\n";
			break;
	}
}
