/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:59 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/11 12:46:17 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>

Harl::Harl(){};

void Harl::debug(void)
{
    std::cout << "DEBUG: "
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.I really do !" << std::endl;
};

void Harl::info(void)
{
    std::cout << "INFO: "
              << " cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void)
{
    std::cout << "WARNING: "
              << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
    std::cout << "ERROR: "
              << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level)
{
    void (Harl::*fctPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string actionsStr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if (level == actionsStr[i])
        {
            (this->*(fctPtr[i]))();
            break;
        }
    }
};
Harl::~Harl(){};