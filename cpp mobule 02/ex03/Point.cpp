/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:18:53 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 13:37:49 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point()
{
    x.setRawBits(0);
    y.setRawBits(0);
};
Point::Point(const float x1, const float y1)
{
    x = Fixed(x1);
    y = Fixed(y1);
};
Point::Point(const Point &old_point)
{
    *this = old_point;
};
Fixed Point::get_x() const
{
    return (x);
};
Fixed Point::get_y() const
{
    return (y);
};
Point &Point::operator=(const Point &other)
{
    this.x = other.get_x();
    this.y = other.get_y();
    return (*this);
};
Point::~Point(){};