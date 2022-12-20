/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:50 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 11:55:16 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap class constructor" << std::endl;
};
ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm)
{
    std::cout << "ScavTrap class string constructor" << std::endl;
};
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap class Destructor" << std::endl;
};
