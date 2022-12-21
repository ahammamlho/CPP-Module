/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/21 14:39:08 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat class: Default constructor called" << std::endl;
};

Cat::Cat(const Cat &old)
{
    std::cout << "Cat class: Copy constructor called" << std::endl;
    *this = old;
};

Cat &Cat::operator=(const Cat &old)
{
    std::cout << "Cat class: Copy assignment operator called" << std::endl;
    if (this != &old)
    {
        type = old.type;
        brain = new Brain(*old.brain);
    }
    return (*this);
};

std::string Cat::getType() const
{
    return type;
};

void Cat::makeSound() const
{
    std::cout << "Cat sound!" << std::endl;
};

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat class: Destructor called" << std::endl;
};