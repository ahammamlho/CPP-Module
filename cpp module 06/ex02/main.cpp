/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/09 18:37:28 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
    std::srand(std::time(nullptr));
    int rnd = rand() % 3;
    Base *result = NULL;
    A *a;
    B *b;
    C *c;

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

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "the actual type of the object pointed to by p is A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "the actual type of the object pointed to by p is B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "the actual type of the object pointed to by p is C" << std::endl;
    else
        std::cout << "unknown objet" << std::endl;
}

void identify(Base &p)
{

    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "the actual type of the object pointed to by p is A" << std::endl;
        (void)a;
    }
    catch (const std::exception &e)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "the actual type of the object pointed to by p is B" << std::endl;
            (void)b;
        }
        catch (const std::exception &e)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                std::cout << "the actual type of the object pointed to by p is C" << std::endl;
                (void)c;
            }
            catch (const std::exception &e)
            {
                std::cout << "unknown objet" << std::endl;
            }
        }
    }
}

int main()
{
    Base *b;

    b = generate();
    identify(b);
    identify(*b);
}