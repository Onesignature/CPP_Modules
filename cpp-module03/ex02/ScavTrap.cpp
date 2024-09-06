/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 02:10:16 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/15 02:21:09 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "*ScavTrap* Default constructor" << std::endl;
	HP = 100;
	EP = 50;
	AD = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "*ScavTrap* Parameter constructor" << std::endl;
	Name = name;
	HP = 100;
	EP = 50;
	AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "*ScavTrap* Copy constructor" << std::endl;
	Name = obj.Name;
	HP = obj.HP;
	EP = obj.EP;
	AD = obj.AD;
}

ScavTrap	ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "*ScavTrap* Copy assignment operator" << std::endl;
	Name = obj.Name;
	HP = obj.HP;
	EP = obj.EP;
	AD = obj.AD;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "*ScavTrap* Destructor" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (HP <= 0)
	{
		std::cout << "ScavTrap " << Name << " is dead" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " is now in gatekeeper mode" << std::endl;
		return ;
	}
}
