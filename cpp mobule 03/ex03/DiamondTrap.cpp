/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:31:19 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 16:28:32 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap class: Default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
};
DiamondTrap::DiamondTrap(std::string nm)
{
    std::cout << "DiamondTrap class: string constructor called" << std::endl;
    ClapTrap::name = nm + "_clap_name";
    name = nm;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
};

DiamondTrap::DiamondTrap(const DiamondTrap &old)
{
    std::cout << "DiamondTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &old)
{
    std::cout << "DiamondTrap class: Copy assignment operator called" << std::endl;
    ClapTrap::name = old.ClapTrap::name;
    name = old.name;
    hitPoints = old.hitPoints;
    energyPoints = old.energyPoints;
    attackDamage = old.attackDamage;
    return (*this);
};

std::string DiamondTrap::get_name_diam() const
{
    return this->name;
}
void DiamondTrap::set_name_diam(std::string name)
{
    this->name = name;
}
void DiamondTrap::whoAmI()
{
    std::cout << "my name: " << name << " ClapTrap name's: " << ClapTrap::name << std::endl;
};
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap class: Destructor called" << std::endl;
};