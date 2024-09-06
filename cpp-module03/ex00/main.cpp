/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 01:36:32 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/15 01:38:21 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
        std::cout << std::endl;
        std::cout << "======DEFAULT CONTRUCTOR TEST==========" << std::endl;
        ClapTrap Patrick("Patrick");
        Patrick.attack("fish");
        Patrick.attack("fish");
        std::cout << "========================================" << std::endl;
        std::cout << std::endl;

        std::cout << "========STRING CONTRUCTOR TEST==========" << std::endl;
        ClapTrap Mr_Bin("Mr.Bin");
        Mr_Bin.attack("fish");
        std::cout << "========================================" << std::endl;
        std::cout << std::endl;

        std::cout << "==========COPY CONTRUCTOR TEST==========" << std::endl;
        ClapTrap Max(Mr_Bin);
        Max.attack("fish");
        std::cout << "========================================" << std::endl;
        std::cout << std::endl;

        std::cout << "========STRING CONTRUCTOR TEST==========" << std::endl;
        ClapTrap Duck = Max;
        Duck.attack("fish");
        std::cout << "========================================" << std::endl;
        std::cout << std::endl;


        std::cout << "========FUNCTIONALITTY TEST=============" << std::endl;
        std::cout << "Pyke will runout of energy" << std::endl;
        std::cout << "Sona will die" << std::endl;
        ClapTrap test1("Pyke");
        ClapTrap test2("Sona");
        std::cout << std::endl;
        test1.attack("wall");
        test1.takeDamage(5);
        test1.beRepaired(3);
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.attack("wall");
        test1.beRepaired(3);
        std::cout << std::endl;
        std::cout << std::endl;
        test2.takeDamage(5);
        test2.beRepaired(100);
        test2.attack("door");
        test2.takeDamage(50);
        test2.takeDamage(50);
        test2.takeDamage(50);
        test2.beRepaired(100);
        test2.attack("door");
        std::cout << std::endl;
        std::cout << "========================================" << std::endl;
    return 0;
}
