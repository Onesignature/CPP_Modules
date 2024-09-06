/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:56:22 by bsaeed            #+#    #+#             */
/*   Updated: 2023/02/15 10:44:50 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	//system("say More Brains");

	int	zombies;
	int	i = 0;
	Zombie *horde = NULL;

	std::cout << "Enter the number of Zombies you want to create: ";
	std::cin >> zombies;
	if (zombies <= 0)
	{
		std::cout << "You cant create negative zombies dummy. re-run";
		return (1);
	}
	horde = zombieHorde(zombies, "Snoozy");
	while (i < zombies)
		horde[i++].announce();
	delete [] horde;
	return (0);
}
