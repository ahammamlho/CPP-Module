/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 16:59:32 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
};
Fixed::Fixed(const Fixed &old_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_fixed;
};
Fixed::Fixed(const int par)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPoint = par << fra_bits;
};

Fixed::Fixed(const float par)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPoint = std::roundf(par * (1 << fra_bits));
};

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPoint = other.getRawBits();
    return (*this);
}
int Fixed::toInt(void) const
{
    return (fixedPoint >> fra_bits);
};

float Fixed::toFloat(void) const
{
    return ((float)fixedPoint / (float)(1 << fra_bits));
};

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
    out << other.toFloat();
    return out;
}

int Fixed::getRawBits(void) const
{
    return fixedPoint;
};

void Fixed::setRawBits(int const raw)
{
    fixedPoint = raw;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};