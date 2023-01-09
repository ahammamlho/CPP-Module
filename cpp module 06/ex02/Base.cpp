/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:18:35 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/09 13:46:17 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>

#include <iostream>

Base::Base()
{
}

Base *Base::generate(void)
{
    std::srand(std::time(nullptr));
    int rnd = rand() % 3;
    Base *result = NULL;
    A *a;
    B *b;
    C *c;
    std::cout << "rnd--> " << rnd << std::endl;
    switch (rnd)
    {
    case 0:
        a = new A();
        result = dynamic_cast<Base *>(a);
        break;
    case 1:
        b = new B();
        result = dynamic_cast<Base *>(b);
        break;
    case 2:
        c = new C();
        result = dynamic_cast<Base *>(c);
        break;
    };

    return (result);
};

void Base::identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "the actual type of the object pointed to by p is A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "the actual type of the object pointed to by p is B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "the actual type of the object pointed to by p is C" << std::endl;
}
Base::~Base()
{
}