/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/19 14:57:28 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>

template <typename A>
void iter(A array[], int len, void (*func)(A))
{
    for (int i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename A>
void function(A a)
{
    std::cout << "- " << a << std::endl;
}

#endif