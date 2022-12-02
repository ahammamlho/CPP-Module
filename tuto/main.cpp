/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:23:49 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/02 14:35:16 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::cout << "----------les variables---------" << std::endl;

    float number = 14.0;
    int nbr = 123;
    char c = 'a';
    std::string welcome_message = "Hello word !";
    const int nbr_const = 2022; // lecture seul
    // auto variable = 123; auto  like var in Dart
    
    std::cout << variable << std::endl;


    std::cout << "--------------------------------" << std::endl;
    return (0);
}