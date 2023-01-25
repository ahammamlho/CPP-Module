/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/25 14:26:48 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap class: Default constructor called" << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
};

ClapTrap::ClapTrap(std::string nm)
{
    std::cout << "ClapTrap class: string constructor called" << std::endl;
    name = nm;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &old_claptrap)
{
    std::cout << "ClapTrap class: Copy constructor called" << std::endl;
    *this = old_claptrap;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &old_claptrap)
{
    std::cout << "ClapTrap class: Copy assignment operator called" << std::endl;
    name = old_claptrap.name;
    hitPoints = old_claptrap.hitPoints;
    energyPoints = old_claptrap.energyPoints;
    attackDamage = old_claptrap.attackDamage;
    return (*this);
};

void ClapTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
        std::cout << "ClapTrap " << name << " died!\n";
    else if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        energyPoints--;
    }
    else
        std::cout << "ClapTrap " << name << " can't do anything, he has zero energy points\n";
};

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
        std::cout << "ClapTrap " << name << " died!\n";
    else
    {
        std::cout << "ClapTrap " << name << " take " << amount << " points of damage!\n";
        if (hitPoints >= amount)
            hitPoints = hitPoints - amount;
        else
            hitPoints = 0;
    }
};

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
        std::cout << "ClapTrap " << name << " died!\n";
    else if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " be Repaired by " << amount << ".\n";
        energyPoints--;
        hitPoints = hitPoints + amount;
    }
    else
        std::cout << "ClapTrap " << name << " can't do anything, he has zero energy points\n";
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap class: Destructor called" << std::endl;
};