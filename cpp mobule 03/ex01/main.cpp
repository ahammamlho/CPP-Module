/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 11:57:23 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{

    ScavTrap scavtrap("hihi");
    scavtrap.attack("hamm");
    scavtrap.beRepaired(5);
    scavtrap.attack("hamm");
    scavtrap.takeDamage(50);
    scavtrap.guardGate();

    return 0;
}