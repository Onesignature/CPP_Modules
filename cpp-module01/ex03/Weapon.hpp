/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:18:07 by bsaeed            #+#    #+#             */
/*   Updated: 2023/02/20 15:18:09 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
class Weapon
{
    private:

        std::string type;

    public :
        Weapon();
        Weapon(std::string str);
        const std::string& getType();
        void setType(std::string type);
};

#endif
