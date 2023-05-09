/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/09 12:27:02 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout
            << "=> Please enter: ./PmergeMe \"array positive numbers\" \n";
    else
    {
        try
        {
            PmergeMe pmergeme(av);
            pmergeme.parce();
            pmergeme.ft_printBefore();
            pmergeme.programe_sort(0, pmergeme.get_size() - 1);
            pmergeme.ft_printAfter();
            pmergeme.ft_printDura();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}
