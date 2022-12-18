/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/17 15:46:27 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
};

Fixed::Fixed(const Fixed &old_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedPoint = old_fixed.getRawBits();
};

Fixed::Fixed(const int par)
{
    fixedPoint = par << fra_bits;
};

int Fixed::toInt(void) const
{
    return (fixedPoint >> fra_bits);
};

Fixed::Fixed(const double par)
{
    fixedPoint = (int)par << fra_bits;
};

int Fixed::toFloat(void)
{
    return (fixedPoint >> fra_bits);
};

Fixed &Fixed::operator=(Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPoint = other.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed &other)
{
    out << other.getRawBits();
    return out;
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPoint;
};

void Fixed::setRawBits(int const raw)
{
    fixedPoint = raw;
    std::cout << "setRawBits member function called" << std::endl;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};