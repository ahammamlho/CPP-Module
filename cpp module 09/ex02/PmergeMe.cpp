/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:29:24 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/08 10:05:21 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **av)
{
    _av = av;
};

void PmergeMe::ft_split(std::string str)
{
    size_t i = 0;
    std::string s;
    while (i < str.size())
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            if (!s.empty())
            {
                std::cout << s << "\n";
                // result.push_back(s);
                s.clear();
            }
        }
        else
            s += str[i];
        i++;
    }
    if (!s.empty())
        std::cout << s << "\n";
    // ; // result.push_back(s);
}

void PmergeMe::parce()
{
    int i = 1;
    while (_av[i])
    {
        ft_split(_av[i]);
        i++;
    }
};
PmergeMe::~PmergeMe()
{
}
