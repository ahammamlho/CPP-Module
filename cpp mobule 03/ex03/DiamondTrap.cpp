/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:31:19 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 15:45:12 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap class: Default constructor called" << std::endl;
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(30);
    set_name("_clap_name");
    set_name_diam("");
};
DiamondTrap::DiamondTrap(std::string nm)
{
    std::cout << "DiamondTrap class: string constructor called" << std::endl;
    set_name(nm + "_clap_name");
    set_name_diam(nm);
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(30);
};

DiamondTrap::DiamondTrap(const DiamondTrap &old)
{
    std::cout << "DiamondTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &old)
{
    std::cout << "DiamondTrap class: Copy assignment operator called" << std::endl;
    set_name(old.get_name());
    set_hitPoints(old.get_hitPoints());
    set_energyPoints(old.get_energyPoints());
    set_attackDamage(old.get_attackDamage());
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
    std::cout << "my name: " << name << " ClapTrap name's: " << get_name() << std::endl;
};
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap class: Destructor called" << std::endl;
};