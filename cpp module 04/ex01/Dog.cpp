/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 18:19:11 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog class: Default constructor called" << std::endl;
    brain = new Brain();
    type = "Dog";
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
    {
        type = old.type;
        brain = new Brain(*old.brain);
    }
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
    delete brain;
};