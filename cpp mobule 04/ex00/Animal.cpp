/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 17:20:35 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal class: Default constructor called" << std::endl;
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
        type = old.type;
    return (*this);
};

std::string Animal::getType() const
{
    return type;
};
void Animal::makeSound() const {};

Animal::~Animal()
{
    std::cout << "Animal class: Destructor called" << std::endl;
};