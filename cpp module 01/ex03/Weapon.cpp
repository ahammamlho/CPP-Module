/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:13:15 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:17:38 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Weapon.h"

Weapon::Weapon(std::string str)
{
    type = str;
}

std::string Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string str)
{
    type = str;
}

Weapon::~Weapon()
{
    std::cout << "Destructor called" << std::endl;
}
