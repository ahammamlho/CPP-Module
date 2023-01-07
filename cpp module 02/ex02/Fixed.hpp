/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/23 16:02:08 by lahammam         ###   ########.fr       */
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

    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed operator++(void);
    Fixed operator++(int x);
    Fixed operator--();
    Fixed operator--(int x);

    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
    static Fixed &max(Fixed &fixed1, Fixed &fixed2);
    static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);

    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};
std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif