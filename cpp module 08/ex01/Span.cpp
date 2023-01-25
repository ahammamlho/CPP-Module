/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:51:02 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/25 22:30:44 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){};

Span::Span(unsigned int N)
{
    len = N;
    std::vector<int> vec(N);
};

void Span::addNumber(int nbr)
{
    if (vec.size() < len)
        vec.push_back(nbr);
    else
        throw IndexOutOfBounds();
};

void Span::filldata(unsigned int ele)
{
    unsigned int i = 0;

    while (i < ele)
    {
        try
        {
            Span::addNumber(i);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        i++;
    }
};
unsigned int get_distance(int nbr1, int nbr2)
{
    if (nbr1 > nbr2)
        return nbr1 - nbr2;
    return nbr2 - nbr1;
};

unsigned int Span::shortestSpan()
{
    unsigned int result;

    if (vec.size() < 2)
        throw DistanceException();
    std::vector<int>::iterator it = vec.begin();
    std::vector<int>::iterator it2;

    result = get_distance(*it, *(it + 1));
    while (it != vec.end())
    {
        it2 = it + 1;
        while (it2 != vec.end())
        {
            if (result > get_distance(*it, *it2))
                result = get_distance(*it, *it2);
            it2++;
        }
        it++;
    }
    return result;
};

unsigned int Span::longestSpan()
{
    unsigned int result;

    if (vec.size() < 2)
        throw DistanceException();
    std::vector<int>::iterator min = std::min_element(vec.begin(), vec.end());
    std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
    result = get_distance(*min, *max);
    return result;
};

Span::Span(const Span &old)
{
    *this = old;
};

Span &Span::operator=(const Span &old)
{
    vec = old.vec;
    len = old.len;
    return (*this);
};

Span::~Span(){};
