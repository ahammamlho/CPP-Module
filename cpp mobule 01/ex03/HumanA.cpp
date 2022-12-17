/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:19:34 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:17:50 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string nm, Weapon &wpn)
{
    name = nm;
    weapon = &wpn;
};

void HumanA::attack()
{
    std::cout << name << " attacks with their  " << weapon->getType() << std::endl;
};

HumanA::~HumanA()
{
    std::cout << "Destructor called" << std::endl;
};
