/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:29:24 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/08 21:33:54 by lahammam         ###   ########.fr       */
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

void PmergeMe::ft_print()
{
    size_t i = 0;

    while (i < _numbers.size())
    {
        std::cout << "--->" << _numbers[i] << std::endl;
        i++;
    }
};
void PmergeMe::ft_split(std::string str)
{
    size_t i = 0;
    std::string s;
    int num;
    while (i < str.size())
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
            std::cout << str[i] << " Error. \n";
        if (str[i] == ' ' || str[i] == '\n')
        {
            if (!s.empty())
            {
                num = std::stoi(s);
                _numbers.push_back(num);
                s.clear();
            }
        }
        else
            s += str[i];
        i++;
    }
    if (!s.empty())
    {
        num = std::stoi(s);
        _numbers.push_back(num);
    }
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

void PmergeMe::merge_insert_sort(std::vector<int> &arr, int l, int r)
{
    if (r - l + 1 < 32)
    {
        for (int i = l + 1; i <= r; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= l && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

PmergeMe::~PmergeMe()
{
}
