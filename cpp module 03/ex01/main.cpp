/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 16:10:13 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{

    ScavTrap s("hihi");
    s.attack("hamm");
    s.beRepaired(5);
    s.attack("hamm");
    s.takeDamage(50);
    s.takeDamage(60);
    s.guardGate();
    s.guardGate();
    return 0;
}