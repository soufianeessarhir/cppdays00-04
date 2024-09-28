/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 14:24:01 by codespace         #+#    #+#             */
/*   Updated: 2024-09-28 14:24:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point
{
private:
    Fixed x;
    Fixed y;
public:
    Point();
    Point(const float,const float);
    Point(const Point&);
    const Point &operator=(const Point &);
    ~Point();
    float get_x()const;
    float get_y()const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif