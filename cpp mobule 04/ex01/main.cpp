/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/21 15:14:06 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    size_t len = 1;
    Animal *obj = new Animal[len];
    for (size_t i = 0; i < len; i++)
    {
        if (i % 2 == 0)
            obj[i] = Dog();
        else
            obj[i] = Cat();
    };

    for (size_t i = 0; i < len; i++)
    {
        delete obj++;
    }
    return 0;
}