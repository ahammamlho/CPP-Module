/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:23:49 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/02 15:40:55 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::cout << "----------conditions---------" << std::endl;
    
    int nbr = 5;
    bool is_empty = false;

    // if (nbr < 10)
    //     std::cout << nbr << " < 10" << std::endl;
    // else
    //      std::cout << nbr << " < 10" << std::endl;
    // switch (nbr)
    // {
    // case 1:
    //     std::cout << nbr << " = 1" << std::endl;
    //     break;
    // case 2:
    //     std::cout << nbr << " = 2" << std::endl;
    //     break;
    // default:
    //     std::cout << "!=1 && !=2" << std::endl;
    //     break;
    // }
    int i = 0;
    while (i <= nbr)
    {
        std::cout << "while " << i << std::endl;
        i++;
    }
    for (int i = 0; i < nbr; i++)
    {
        std::cout << "for " << i << std::endl;
    }
    
        
    std::cout << "--------------------------------" << std::endl;
    return (0);
}