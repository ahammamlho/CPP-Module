/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/11 11:16:48 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>

template <class T>
class Array
{
private:
    T *element;

public:
    Array(){

    };
    Array(unsigned int n)
    {
        element = new T[n];
    };

    int size()
    {
        unsigned int len;
        try
        {
            (void)element[0];
            len = sizeof(element) / sizeof(T);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            len = 0;
        }
        return (len);
    }
    // Array &operator=(const Array &other)
    // {
    //     return (*this);
    // }
    T &operator[](int index)
    {
        if (index < 0 || index >= this->size())
            throw std::exception();
        return (element[index]);
    }
    ~Array(){};
};

#endif