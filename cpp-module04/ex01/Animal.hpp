/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:00:33 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/16 04:16:18 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &obj);
		Animal operator=(const Animal &obj);
		virtual ~Animal();

		std::string	getType( void ) const;
		virtual void makeSound() const;
		virtual Brain* getBrain() const;
};

# endif
