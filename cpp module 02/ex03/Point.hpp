/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:16:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 15:44:03 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string.h>
#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const float x1, const float y1);
    Point(const Point &old_point);
    Point &operator=(const Point &other);
    Fixed get_x() const;
    Fixed get_y() const;
    ~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif