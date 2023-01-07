/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_handle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:39:03 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 20:43:41 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int ft_is_int(char *str)
{
    int i;
    long long nbr;
    i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (!str[i])
        return (0);
    while (str && str[i])
    {
        if (str[i] > '9' || str[i] < '0')
            return (0);
        i++;
    }
    if (ft_strlen(str > 11))
        return 0;

    return (1);
};

void typeInt(int num)
{
    std::cout << "char: "
              << "Non displayable" << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << num << ".0f" << std::endl;
    std::cout << "double: " << num << ".0" << std::endl;
};
