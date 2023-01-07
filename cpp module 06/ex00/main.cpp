/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 20:42:29 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <climits>

void typedouble(double num)
{
    std::cout << "char: "
              << "Non displayable" << std::endl;
    std::cout << "int: " << (int)num << std::endl;
    std::cout << "float: " << num << "f" << std::endl;
    std::cout << "double: " << num << std::endl;
}

void typefloat(float num)
{
    std::cout << "char: "
              << "Non displayable" << std::endl;
    std::cout << "int: " << (int)num << std::endl;
    std::cout << "float: " << num << "f" << std::endl;
    std::cout << "double: " << num << std::endl;
}

int ft_is_double(char *str)
{
    int i;
    int nbrPoint;

    i = 0;
    nbrPoint = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0' || str[i] == '.')
        return (0);
    while (str && str[i])
    {
        if (str[i] == '.' && str[i + 1] == '\0')
            return (0);
        if (str[i] == '.')
            nbrPoint++;
        else if (str[i] > '9' || str[i] < '0' || nbrPoint > 1)
            return (0);
        i++;
    }
    return (1);
}

int ft_is_float(char *str)
{
    int i;
    int nbrPoint;

    i = 0;
    nbrPoint = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0' || str[i] == '.')
        return (0);
    while (str && str[i])
    {
        if (nbrPoint && str[i] == 'f' && str[i + 1] == '\0')
            return (1);
        if (str[i] == '.' && str[i + 1] == 'f')
            return (0);
        if (str[i] == '.' && str[i + 1] == '\0')
            return (0);
        if (str[i] == '.')
            nbrPoint++;
        else if (str[i] > '9' || str[i] < '0' || nbrPoint > 1)
            return (0);
        i++;
    }
    return (0);
}
int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    std::cout << INT_MAX << std::endl; // Outputs the maximum value that can be represented by an int
    std::cout << INT_MIN << std::endl; // Outputs the minimum value that can be represented by an int
    return 0;
    if (ft_is_int(av[1]))
        typeInt(std::stoi(av[1]));
    else if (ft_is_double(av[1]))
        typedouble(std::stod(av[1]));
    else if (ft_is_float(av[1]))
        typefloat(std::stod(av[1]));

    return 0;
}