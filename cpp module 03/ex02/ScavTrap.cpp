/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:50 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 16:14:55 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap class: Default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
};
ScavTrap::ScavTrap(std::string nm)
{
    std::cout << "ScavTrap class: string constructor called" << std::endl;
    name = nm;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
};
ScavTrap::ScavTrap(const ScavTrap &old)
{
    std::cout << "ScavTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &old)
{
    std::cout << "ScavTrap class: Copy assignment operator called" << std::endl;
    name = old.name;
    hitPoints = old.hitPoints;
    energyPoints = old.energyPoints;
    attackDamage = old.attackDamage;
    return (*this);
};
void ScavTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
        std::cout << "ScavTrap " << name << " died!\n";
    else if (energyPoints > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        energyPoints--;
    }
    else
        std::cout << "ScavTrap " << name << " can't do anything, he has zero energy points\n";
};
void ScavTrap::guardGate()
{
    if (hitPoints <= 0)
        std::cout << "ScavTrap " << name << " died!\n";
    else
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap class Destructor called" << std::endl;
};
