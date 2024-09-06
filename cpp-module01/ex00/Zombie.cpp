#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
};

void Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name)
{
	this->name = name;
}

std::string Zombie::getName()
{
	return (this->name);
}
