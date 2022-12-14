/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:17:24 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:03:47 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string namee)
{
    name = namee;
};

Zombie::Zombie()
{
    name = "";
};

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::~Zombie()
{
    std::cout << name << " destroyed" << std::endl;
};