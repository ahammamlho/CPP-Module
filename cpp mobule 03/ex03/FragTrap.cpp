/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:50 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 15:34:50 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap class: Default constructor called" << std::endl;
    set_hitPoints(100);
    set_energyPoints(100);
    set_attackDamage(30);
};
FragTrap::FragTrap(std::string nm)
{
    std::cout << "FragTrap class: string constructor called" << std::endl;
    set_name(nm);
    set_hitPoints(100);
    set_energyPoints(100);
    set_attackDamage(30);
};
FragTrap::FragTrap(const FragTrap &old)
{
    std::cout << "FragTrap class: Copy constructor called called" << std::endl;
    *this = old;
};

FragTrap &FragTrap::operator=(const FragTrap &old)
{
    std::cout << "FragTrap class: Copy assignment operator called" << std::endl;
    set_name(old.get_name());
    set_hitPoints(old.get_hitPoints());
    set_energyPoints(old.get_energyPoints());
    set_attackDamage(old.get_attackDamage());
    return (*this);
};
void FragTrap::attack(const std::string &target)
{
    if (get_hitPoints() <= 0)
        std::cout << "FragTrap " << get_name() << " died!\n";
    else if (get_attackDamage() > 0)
    {
        std::cout << "FragTrap " << get_name() << " attacks " << target << ", causing " << get_attackDamage() << " points of damage!\n";
        unsigned int tm = get_energyPoints() - 1;
        set_energyPoints(tm);
    }
    else
        std::cout << "FragTrap " << get_name() << " can't do anything, he has zero energy points\n";
};
void FragTrap::highFivesGuy(void)
{
    std::cout << "FragTrap positive high fives" << std::endl;
};
FragTrap::~FragTrap()
{
    std::cout << "FragTrap class Destructor called" << std::endl;
};
