/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:16:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/19 13:33:37 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string.h>
#include <Fixed.hpp>

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const float x1, const float y1);
    Point(const Point &old_point);
    Fixed get_x() const;
    Fixed get_y() const;
    ~Point();
};

#endif