/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/21 11:44:27 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog class: Default constructor called" << std::endl;
};

Dog::Dog(const Dog &old)
{
    std::cout << "Dog class: Copy constructor called" << std::endl;
    *this = old;
};

Dog &Dog::operator=(const Dog &old)
{
    std::cout << "Dog class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string Dog::getType() const
{
    return type;
};

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog class: Destructor called" << std::endl;
};