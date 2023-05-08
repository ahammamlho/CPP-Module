/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:29:20 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/08 20:49:01 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

class PmergeMe
{
private:
    char **_av;
    std::vector<int> _numbers;

public:
    PmergeMe();
    PmergeMe(char **av);
    void parce();
    void ft_split(std::string str);
    void merge_insert_sort(std::vector<int> &arr, int l, int r);
    void ft_print();
    ~PmergeMe();
};
