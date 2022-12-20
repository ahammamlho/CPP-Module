/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:50 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 16:15:09 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap class: Default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
};
FragTrap::FragTrap(std::string nm)
{
    std::cout << "FragTrap class: string constructor called" << std::endl;
    name = nm;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
};
FragTrap::FragTrap(const FragTrap &old)
{
    std::cout << "FragTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

FragTrap &FragTrap::operator=(const FragTrap &old)
{
    std::cout << "FragTrap class: Copy assignment operator called" << std::endl;
    name = old.name;
    hitPoints = old.hitPoints;
    energyPoints = old.energyPoints;
    attackDamage = old.attackDamage;
    return (*this);
};
void FragTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
        std::cout << "FragTrap " << name << " died!\n";
    else if (energyPoints > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
        energyPoints--;
    }
    else
        std::cout << "FragTrap " << name << " can't do anything, he has zero energy points\n";
};
void FragTrap::highFivesGuy(void)
{
    if (hitPoints <= 0)
        std::cout << "FragTrap " << name << " died!\n";
    else
        std::cout << "FragTrap positive high fives" << std::endl;
};
FragTrap::~FragTrap()
{
    std::cout << "FragTrap class Destructor called" << std::endl;
};
