/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 18:19:24 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal class: Default constructor called" << std::endl;
    type = "Animal";
};

Animal::Animal(const Animal &old)
{
    std::cout << "Animal class: Copy constructor called" << std::endl;
    *this = old;
};

Animal &Animal::operator=(const Animal &old)
{
    std::cout << "Animal class: Copy assignment operator called" << std::endl;
    if (this != &old)
        this->type = old.type;
    return (*this);
};

std::string Animal::getType() const
{
    return type;
};
void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal class: Destructor called" << std::endl;
};