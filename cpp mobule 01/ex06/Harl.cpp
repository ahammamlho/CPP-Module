/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:59 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/11 13:12:54 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>

Harl::Harl(){};

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.I really do !" << std::endl;
};

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl
              << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl
              << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl
              << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level)
{
    std::string actionsStr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index;
    for (size_t i = 0; i < 4; i++)
    {
        if (level == actionsStr[i])
        {
            index = i;
            break;
        }
    }
    switch (index)
    {
    case 0:
        debug();
        index = 1;
    case 1:
        info();
        index = 2;
    case 2:
        warning();
        index = 3;
    case 3:
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
};
Harl::~Harl(){};