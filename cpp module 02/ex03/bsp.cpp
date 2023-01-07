/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:36:15 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 16:46:25 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
    Fixed result = (a.get_x() * (b.get_y() - c.get_y()) +
                    b.get_x() * (c.get_y() - a.get_y()) +
                    c.get_x() * (a.get_y() - b.get_y())) *
                   Fixed(0.5f);
    if (result < 0)
        return (result * Fixed(-1));
    return (result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{

    Fixed areaTriangle = area(a, b, c);
    Fixed area1 = area(a, b, point);
    Fixed area2 = area(c, b, point);
    Fixed area3 = area(a, c, point);

    Fixed areaSomme = area1 + area2 + area3;
    Fixed fx = area1 * area2 * area3;

    bool b1 = (areaTriangle == areaSomme);
    bool b2 = (Fixed(0.0f) != fx);
    return (b1 && b2);
}