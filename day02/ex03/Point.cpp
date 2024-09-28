/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 14:30:45 by codespace         #+#    #+#             */
/*   Updated: 2024-09-28 14:30:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0){};
Point::Point(const float x1, const float y1){this->x = x1,this->y = y1;}
const Point & Point::operator=(const Point&ob)
{
    if (this != &ob)
        this->x = ob.x,this->y = ob.y;
    return *this;
}
Point::Point(const Point&ob){*this = ob; }
Point::~Point(){}
 float Point::get_x()const{return x.toFloat();}
 float Point::get_y()const{return y.toFloat();}