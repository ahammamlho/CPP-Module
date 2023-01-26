/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/26 14:39:36 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

public:
    typedef typename Container::iterator iterator;
    
    MutantStack(){};

    MutantStack(const MutantStack &old)
    {
        *this = old;
    };

    MutantStack &operator=(const MutantStack &old)
    {
        this->c = old.c;
        return (*this);
    };
    
    typename Container::iterator begin()
    {
        return this->c.begin();
    }

    typename Container::iterator end()
    {
        return this->c.end();
    }
    
    ~MutantStack(){};

};

#endif