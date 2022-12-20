/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:50 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 13:51:47 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap class: Default constructor called" << std::endl;
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(20);
};
ScavTrap::ScavTrap(std::string nm)
{
    std::cout << "ScavTrap class: string constructor called" << std::endl;
    set_name(nm);
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(20);
};
ScavTrap::ScavTrap(const ScavTrap &old)
{
    std::cout << "ScavTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &old)
{
    std::cout << "ScavTrap class: Copy assignment operator called" << std::endl;
    set_name(old.get_name());
    set_hitPoints(old.get_hitPoints());
    set_energyPoints(old.get_energyPoints());
    set_attackDamage(old.get_attackDamage());
    return (*this);
};
void ScavTrap::attack(const std::string &target)
{
    if (get_hitPoints() <= 0)
        std::cout << "ScavTrap " << get_name() << " died!\n";
    else if (get_attackDamage() > 0)
    {
        std::cout << "ScavTrap " << get_name() << " attacks " << target << ", causing " << get_attackDamage() << " points of damage!\n";
        unsigned int tm = get_energyPoints() - 1;
        set_energyPoints(tm);
    }
    else
        std::cout << "ScavTrap " << get_name() << " can't do anything, he has zero energy points\n";
};
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap class Destructor called" << std::endl;
};
