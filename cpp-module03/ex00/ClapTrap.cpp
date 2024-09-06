/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:37:26 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/15 01:47:08 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "*ClapTrap* Default constructor" << std::endl;
	HP = 10;
	EP = 10;
	AD = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "*ClapTrap* Parameter constructor" << std::endl;
	Name = name;
	HP = 10;
	EP = 10;
	AD = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "*ClapTrap* Copy constructor" << std::endl;
	Name = obj.Name;
	HP = obj.HP;
	EP = obj.EP;
	AD = obj.AD;
}

ClapTrap	ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "*ClapTrap* Copy assignment operator" << std::endl;
	Name = obj.Name;
	HP = obj.HP;
	EP = obj.EP;
	AD = obj.AD;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "*ClapTrap* Destructor" << std::endl;
}

std::string	ClapTrap::getName( void ) const{
	return (Name);
}

void	ClapTrap::attack(const std::string& target)
{
	if (EP <= 0)
	{
		std::cout << "Claptrap " << Name << " does not have energy to attack" << std::endl;
		return ;
	}
	if (HP <= 0)
	{
		std::cout << "Claptrap " << Name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target
	<< ", causing [" << AD << "] points of damage!" << std::endl;
	EP--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HP <= 0)
	{
		std::cout << "Claptrap " << Name << " is dead" << std::endl;
		return ;
	}
	HP -= amount;
	if (HP <= 0)
	{
		std::cout << "Claptrap " << Name << " died after recieving damage of size: " << amount << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " receives damage [" << amount
		<< "] , causing new HP = [" << HP << "]" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EP <= 0)
	{
		std::cout << "Claptrap " << Name << " does not have energy to be repaired" << std::endl;
		return ;
	}
	if (HP <= 0)
	{
		std::cout << "Claptrap " << Name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " has been repaired to new HP of: " << HP + amount << std::endl;
	HP += amount;
	EP--;
}
