/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/18 23:05:13 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
private:
    int fixedPoint;
    const static int fra_bits = 8;

public:
    Fixed();
    Fixed(const Fixed &old_fixed);
    Fixed(const int par);
    Fixed(const float par);
    Fixed &operator=(const Fixed &other);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);
#endif