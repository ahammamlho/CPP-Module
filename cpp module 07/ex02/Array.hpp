/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/24 09:00:35 by lahammam         ###   ########.fr       */
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
    unsigned int len;

public:
    Array()
    {
        element = new T[0];
        len = 0;
        std::cout << "condtuctor 0\n";
    };

    Array(unsigned int n)
    {
        element = new T[n];
        len = n;
        std::cout << "condtuctor 1\n";
    };

    Array(const Array &other)
    {
        len = other.len;
        element = new T[len];
        for (unsigned int i = 0; i < len; i++)
        {
            element[i] = other.element[i];
        };
        std::cout << "condtuctor 3\n";
    }

    Array &operator=(Array &other)
    {
        delete[] element;
        len = other.len;
        element = new T[len];
        for (unsigned int i = 0; i < len; i++)
        {
            element[i] = other.element[i];
        };
        return (*this);
    }

    class IndexOutOfBounds : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Index is out of bounds";
        };
    };

    T &operator[](unsigned int i)
    {
        if (i >= len)
            throw IndexOutOfBounds();
        return element[i];
    }

    unsigned int size()
    {
        return len;
    }

    ~Array()
    {
        delete[] element;
    };
};

#endif