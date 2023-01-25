/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/25 23:10:27 by lahammam         ###   ########.fr       */
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
private:

public:
    MutantStack(){};

    ~MutantStack(){};
};

#endif