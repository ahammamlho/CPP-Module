/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 17:31:12 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal()
{
    type = "A_Animal";
    std::cout << "A_Animal class: Default constructor called" << std::endl;
};

A_Animal::A_Animal(const A_Animal &old)
{
    std::cout << "A_Animal class: Copy constructor called" << std::endl;
    *this = old;
};

A_Animal &A_Animal::operator=(const A_Animal &old)
{
    std::cout << "A_Animal class: Copy assignment operator called" << std::endl;
    if (this != &old)
        this->type = old.type;
    return (*this);
};

std::string A_Animal::getType() const
{
    return type;
};

A_Animal::~A_Animal()
{
    std::cout << "A_Animal class: Destructor called" << std::endl;
};