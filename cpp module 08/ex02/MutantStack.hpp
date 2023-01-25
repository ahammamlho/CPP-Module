/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/25 21:16:05 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>
#include <vector>

template <typename T>
class MutantStack
{
private:
    std::vector<T> mystack;

public:
    MutantStack(){};

    unsigned int size()
    {
        return mystack.size();
    }

    T top()
    {
        return *(mystack.end() - 1);
    }

    bool empty()
    {
        if (mystack.size() == 0)
            return (0);
        return (1);
    }

    void push(T elm)
    {
        mystack.push_back(elm);
    };

    void pop()
    {
        std::vector<T>::iterator it = mystack.end();
        mystack.erase(it - 1);
    };
    std::vector<T>::iterator begin()
    {
        return mystack.begin();
    };

    std::vector<T>::iterator end()
    {
        return mystack.end();
    };

    ~MutantStack(){};
};

#endif