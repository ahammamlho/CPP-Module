/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:23:49 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/03 14:40:19 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


void setNumber(int& a, int &b)
{
    a = 10;
    b = 20;
}

int main()
{
    std::cout << "--------------------------------" << std::endl;
    
   int a = 55;
   int b = 99;
    std::cout << a << " " << b << std::endl;
    setNumber(a, b);
    std::cout << a << " " << b << std::endl;
        
    std::cout << "--------------------------------" << std::endl;
    return (0);
}