/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 17:28:05 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string.h>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog &old);
    ~Dog();
    Dog &operator=(const Dog &old);

    void makeSound() const;
    std::string getType() const;
};

#endif