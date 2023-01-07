/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 17:30:36 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>
#include <string.h>

class A_Animal
{
protected:
    std::string type;

public:
    A_Animal();
    A_Animal(const A_Animal &old);
    virtual ~A_Animal();
    A_Animal &operator=(const A_Animal &old);

    virtual void makeSound() const = 0;
    virtual std::string getType() const;
};

#endif