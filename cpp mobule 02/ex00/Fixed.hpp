/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/17 13:00:30 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
private:
    int a;
    const static int fra = 8;

public:
    Fixed();
    Fixed(const Fixed &old_fixed);
    Fixed &operator=(Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif