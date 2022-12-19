/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 17:26:51 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    a = 0;
};

Fixed::Fixed(const Fixed &old_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_fixed;
};

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (*this).a = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return a;
};

void Fixed::setRawBits(int const raw)
{
    a = raw;
    std::cout << "setRawBits member function called" << std::endl;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};