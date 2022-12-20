/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:50 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 13:11:30 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap class: Default constructor called" << std::endl;
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(20);
};
FragTrap::FragTrap(std::string nm)
{
    std::cout << "FragTrap class: string constructor called" << std::endl;
    set_name(nm);
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(20);
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
void FragTrap::highFivesGuy(void)
{
    std::cout << "FragTrap positive high fives" << std::endl;
};
FragTrap::~FragTrap()
{
    std::cout << "FragTrap class Destructor called" << std::endl;
};
