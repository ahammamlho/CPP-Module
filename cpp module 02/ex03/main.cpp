/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 16:50:15 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(7.0f, 7.0f);
    Point b(8.0f, 1.0f);
    Point c(1.0f, 1.0f);
    Point point(2.0f, 1.1f);

    if (bsp(a, b, c, point))
        std::cout << "in \n";
    else
        std::cout << "out \n";
    return 0;
}