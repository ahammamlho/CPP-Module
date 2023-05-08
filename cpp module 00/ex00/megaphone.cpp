/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:54:14 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/08 11:42:08 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void upperCase(std::string str)
{
    char tmp;
    for (unsigned int j = 0; j < str.length(); j++)
    {
        tmp = str[j];
        if (tmp >= 97 && tmp <= 122)
            tmp = tmp - ('a' - 'A');
        std::cout << tmp;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            upperCase(argv[i]);
            i++;
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
}