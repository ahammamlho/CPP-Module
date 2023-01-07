/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 12:15:08 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void typeInt(int num)
{
    std::cout << "char: "
              << "Non displayable" << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << (float)num << "f" << std::endl;
    std::cout << "double: " << (double)num << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    (void)av;

    try
    {
        int num = std::stoi(av[1]);
        typeInt(num);
    }
    catch (const std::invalid_argument &e)
    {
        // If the conversion fails, the argument is not an integer
        std::cout << "The argument is not an integer" << std::endl;
    }
    return 0;
}