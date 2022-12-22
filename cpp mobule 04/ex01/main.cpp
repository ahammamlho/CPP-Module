/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 18:26:08 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    size_t len = 4;
    Animal **obj = new Animal *[len];
    for (size_t i = 0; i < len; i++)
    {
        if (i % 2 == 0)
            obj[i] = new Dog();
        else
            obj[i] = new Cat();
    };
    for (size_t i = 0; i < len; i++)
    {
        delete obj[i];
    }
    delete[] obj;
    return 0;
}