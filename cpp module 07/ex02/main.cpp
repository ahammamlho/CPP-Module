/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/24 09:02:23 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char **)
{
        Array<int> numbers(MAX_VAL);
        std::cout << "----------------\n";
        Array<int> test(numbers);
        std::cout << test.size();
        std::cout << "\n----------------\n";
        Array<int> b;
        // b =
        std::cout << b.size();
}