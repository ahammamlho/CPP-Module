/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:23:49 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/02 14:53:38 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::cout << "----------saisie utilisateur---------" << std::endl;
    
    std::cout << "Tapez votre name : ";
    std::string name;
    // std::cin >> name;
    std::getline(std::cin, name);
    std::cout << "name saisi est : " << name << std::endl;
    std::cin.clear(); // .good()  .bad()   .fail()
    
    std::cout << "--------------------------------" << std::endl;
    return (0);
}