/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:22:14 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/10 11:59:58 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <typeinfo>
#include <iomanip>
#include <limits>

class A
{
};

class B : public A
{
};

int main()
{
    A *a = new A();
    B *b = static_cast<B *>(a);
    return 0;
}