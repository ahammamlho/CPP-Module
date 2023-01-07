/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/21 13:49:10 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal class: Default constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
    std::cout << "WrongAnimal class: Copy constructor called" << std::endl;
    *this = old;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &old)
{
    std::cout << "WrongAnimal class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string WrongAnimal::getType() const
{
    return type;
};
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound!" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal class: Destructor called" << std::endl;
};