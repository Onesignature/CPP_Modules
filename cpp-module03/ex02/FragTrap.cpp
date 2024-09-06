/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 04:02:16 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/15 04:06:35 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "*FragTrap* Default constructor" << std::endl;
	HP = 100;
	EP = 100;
	AD = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "*FragTrap* Parameter constructor" << std::endl;
	Name = name;
	HP = 100;
	EP = 100;
	AD = 30;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "*FragTrap* Copy constructor" << std::endl;
	Name = obj.Name;
	HP = obj.HP;
	EP = obj.EP;
	AD = obj.AD;
}

FragTrap	FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "*FragTrap* Copy assignment operator" << std::endl;
	Name = obj.Name;
	HP = obj.HP;
	EP = obj.EP;
	AD = obj.AD;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "*FragTrap* Destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (HP <= 0)
	{
		std::cout << "FragTrap " << Name << " is dead" << std::endl;
		return ;
	}
	else
	{
		std::cout << "Fragtrap " << Name << " wants a high five!!!" << std::endl;
		return ;
	}
}
