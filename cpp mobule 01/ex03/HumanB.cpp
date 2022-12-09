/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:26:44 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/09 12:21:53 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string nm)
{
    name = nm;
};

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their  " << weapon->getType() << std::endl;
};
void HumanB::setWeapon(Weapon &wpn)
{
    weapon = &wpn;
};
HumanB::~HumanB(){};
