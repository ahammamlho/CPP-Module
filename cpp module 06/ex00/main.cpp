/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/08 12:28:38 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <climits>

int is_specialValues(char *str)
{
    std::string tmp = str;
    if (
        tmp == "-inff" || tmp == "+inff" || tmp == "nanf" || tmp == "-inf" || tmp == "+inf" || tmp == "nan")
        return (1);
    return (0);
}
int is_string(char *str)
{
    int i;
    int nbr_p = 0;

    i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0' || str[i] == '+' || str[i] == '-' || str[i] == '.' || str[i] == 'f')
        return (1);
    while (str[i])
    {
        if (str[i] == 'f' && str[i + 1] == '\0')
            return (0);
        else if (str[i] == '.')
        {
            nbr_p++;
            if (str[i + 1] == '\0')
                return (1);
        }
        else if (!isdigit(str[i]) || nbr_p > 1 || str[i] == 'f')
            return (1);
        i++;
    }
    return (0);
}

void ft_printChar(char *str)
{
    if (strlen(str) == 1)
        std::cout << "char: "
                  << str << std::endl;
    else if (is_string(str) || is_specialValues(str))
        std::cout << "char: "
                  << "impossible" << std::endl;
    else
        std::cout << "char: "
                  << "Non displayable" << std::endl;
}
void ft_printInt(char *str)
{
    char *end;
    double number;
    number = std::strtod(str, &end);
    if (is_string(str) || is_specialValues(str))
        std::cout
            << "int: "
            << "impossible" << std::endl;
    else
    {
        if (static_cast<double>(INT_MIN) <= number && static_cast<double>(INT_MAX) >= number)
            std::cout << "int: " << static_cast<int>(number) << std::endl;
        else
            std::cout
                << "int: "
                << "impossible" << std::endl;
    }
}
void ft_printFloat(char *str)
{
    char *end;
    double number;
    int temp;
    number = std::strtod(str, &end);
    if (is_specialValues(str))
        std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
    else if (is_string(str))
        std::cout
            << "float: "
            << "impossible" << std::endl;
    else
    {
        temp = static_cast<int>(number);
        if (static_cast<double>(temp) == number)
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
    }
}

void ft_printDouble(char *str)
{
    char *end;
    double number;
    int temp;
    number = std::strtod(str, &end);
    if (is_specialValues(str))
        std::cout << "double: " << number << std::endl;
    else if (is_string(str))
        std::cout
            << "double: "
            << "impossible" << std::endl;
    else
    {
        temp = static_cast<int>(number);
        if (static_cast<double>(temp) == number)
            std::cout << "double: " << std::fixed << std::setprecision(1) << number << std::endl;
        else
            std::cout << "double: " << number << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "./convert arg" << std::endl;
        return 1;
    }

    ft_printChar(av[1]);
    ft_printInt(av[1]);
    ft_printFloat(av[1]);
    ft_printDouble(av[1]);

    return 0;
}