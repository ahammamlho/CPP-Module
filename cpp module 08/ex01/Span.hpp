/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:25:52 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/25 15:05:05 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>
#include <vector>

class Span
{
private:
    std::vector<int> vec;
    unsigned int len;

public:
    Span();
    Span(unsigned int N);
    void addNumber(int nbr);
    void filldata(unsigned int ele);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    Span &operator=(const Span &old);
    Span(const Span &old);
    ~Span();

    class IndexOutOfBounds : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "There are already N elements stored.";
        };
    };

    class DistanceException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "There are no numbers stored, or only one.";
        };
    };
};

#endif