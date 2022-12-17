/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:26:44 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:21:12 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string nm)
{
    name = nm;
};

void HumanB::setWeapon(Weapon &wpn)
{
    weapon = &wpn;
};

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their  " << weapon->getType() << std::endl;
};

HumanB::~HumanB()
{
    std::cout << "Destructor called" << std::endl;
};
