/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/10 14:39:51 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename A>
void iter(A array[], int len, void (*func)(A))
{
    for (int i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename A>
void function(A a)
{
    std::cout << "- " << a << std::endl;
}

int main(void)
{
    int a[5] = {10, 50, 30, 40, 20};
    std::string array[5] = {"000", "111", "222", "333", "444"};

    iter(a, 5, &function);
    std::cout << "-----------------------" << std::endl;
    iter(array, 5, &function);

    return 0;
};