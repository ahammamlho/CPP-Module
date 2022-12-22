/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/21 13:51:14 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat class: Default constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat &old)
{
    std::cout << "WrongCat class: Copy constructor called" << std::endl;
    *this = old;
};

WrongCat &WrongCat::operator=(const WrongCat &old)
{
    std::cout << "WrongCat class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string WrongCat::getType() const
{
    return type;
};

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class: Destructor called" << std::endl;
};