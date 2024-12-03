/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 14:38:51 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 14:38:51 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0){};
Point::Point(const float x1, const float y1):x(x1),y(y1){};
Point::Point(const Point& ob) : x(ob.x), y(ob.y) {}

const Point& Point::operator=(const Point& ob) 
{
    if (this == &ob)
        return *this;
    this->~Point();
    new (this) Point(ob);
    return *this;
} 
Point::~Point(){}
 float Point::get_x()const{return x.toFloat();}
 float Point::get_y()const{return y.toFloat();}