/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 16:42:11 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal class: Default constructor called" << std::endl;
};

Animal::Animal(const Animal &old)
{
    std::cout << "Animal class: Copy constructor called" << std::endl;
    *this = old_claptrap;
};

Animal &Animal::operator=(const Animal &old)
{
    std::cout << "Animal class: Copy assignment operator called" << std::endl;

    return (*this);
};

Animal::~Animal()
{
    std::cout << "Animal class: Destructor called" << std::endl;
};