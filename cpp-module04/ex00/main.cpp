/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:50:05 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/16 00:24:32 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"


int main()
{
	std::cout << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;


	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();


	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;


	std::cout << std::endl;
	const WrongAnimal* an = new WrongAnimal();
	const WrongAnimal* ca = new WrongCat();


	std::cout << std::endl;
	std::cout << an->getType() << " " << std::endl;
	std::cout << ca->getType() << " " << std::endl;

	std::cout << std::endl;
	std::cout << "making wrong noise cos there is no virtual keyword" << std::endl;
	an->makeSound();
	ca->makeSound();
	std::cout << std::endl;
	std::cout << "making correct noise when created as cat" << std::endl;
	WrongCat wrongCat;
	wrongCat.makeSound();

	std::cout << std::endl;
	delete an;
	delete ca;
	std::cout << std::endl;
	return 0;
}
