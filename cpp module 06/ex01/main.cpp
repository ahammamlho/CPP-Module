/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/09 11:19:33 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

class Entity
{
public:
    virtual void printff()
    {
        std::cout << "---> Entity\n";
    }
};

class Player : public Entity
{
public:
    void printff()
    {
        std::cout << "---> Player\n";
    }

    void pp()
    {
        std::cout << "---> Player\n";
    }
};

class Enemy : public Entity
{
public:
    void printff()
    {
        std::cout << "---> Enemy\n";
    }
    void ee()
    {
        std::cout << "---> Enemy\n";
    }
};
int main()
{
    class Base
    {
    public:
        virtual void foo() {}
    };
    class Derived : public Base
    {
    };
    class Derived2 : public Base
    {
    };

    Base *b = new Base;
    Derived *d = static_cast<Derived *>(b); // Compiles, but not safe (b is not actually a Derived object)
    // Derived *d2 = dynamic_cast<Derived *>(b); // Runtime error, b is not actually a Derived object

    Base *b2 = new Derived;
    Derived *d3 = static_cast<Derived *>(b2);  // Compiles, but not safe (b2 may not actually point to a Derived object)
    Derived *d4 = dynamic_cast<Derived *>(b2); // Safe, because b2 actually points to a Derived object
    return 0;
}