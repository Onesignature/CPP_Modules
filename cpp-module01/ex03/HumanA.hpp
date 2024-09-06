/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:18:17 by bsaeed            #+#    #+#             */
/*   Updated: 2023/03/03 00:27:19 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon& weapon; //HumanA will always be armed hence reference type
                        //since reference type cannot be NULL

    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
};

#endif
