/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/24 09:53:51 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;

    a = b;
    b = temp;
}

template <typename T>
T min(T a, T b)
{
    if (a < b)
        return (a);
    return b;
}

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return (a);
    return b;
}

#endif