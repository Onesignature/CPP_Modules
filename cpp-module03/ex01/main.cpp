/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 01:36:32 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/15 02:21:18 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
/*===============================================================================*/
int main() {

        ScavTrap test1("Pyke");

        std::cout << std::endl;
        std::cout << "HP: " << test1.getHP() << std::endl;
        std::cout << "EP: " << test1.getEP() << std::endl;
        std::cout << "AD: " << test1.getAD() << std::endl;
        std::cout << std::endl;
        test1.attack("fish");
        std::cout << std::endl;
        test1.takeDamage(56);
        std::cout << std::endl;
        test1.beRepaired(14);
        std::cout << std::endl;
        test1.guardGate();
        std::cout << std::endl;
        return 0;
}
