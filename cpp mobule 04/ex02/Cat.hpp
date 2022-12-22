/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 17:27:56 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string.h>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(const Cat &old);
    ~Cat();
    Cat &operator=(const Cat &old);

    void makeSound() const;
    std::string getType() const;
};

#endif