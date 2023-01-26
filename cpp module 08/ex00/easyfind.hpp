/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/26 14:22:21 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>
#include <vector>

template <typename T>
void easyfind(T ctr, int len)
{
    typename T::iterator it = std::find(ctr.begin(), ctr.end(), len);
    // std::cout << ctr << std::endl;
    if (it != ctr.end())
        std::cout << "Element found" << std::endl;
    else
        std::cout << "Element not found" << std::endl;
}

#endif