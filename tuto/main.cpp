/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:23:49 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/03 15:18:49 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"


struct Product
{
    std::string name;
    float prix;
    bool available;
};


int main()
{
    std::cout << "--------------------------------" << std::endl;
     
    using Product = struct Product; // alias
    Product p1;
    p1.name  = "ahammam";
    p1.prix = 1.25;
    p1.available = true;

    std::cout << "name : " << p1.name << std::endl;
  
    std::cout << "--------------------------------" << std::endl;
    return (0);
}