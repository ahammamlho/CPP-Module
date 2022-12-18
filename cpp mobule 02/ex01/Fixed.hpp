/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/17 15:44:44 by lahammam         ###   ########.fr       */
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
    Fixed(const double par);
    Fixed &operator=(Fixed &other);
    int toInt(void) const;
    int toFloat(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif