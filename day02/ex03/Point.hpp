/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 14:38:58 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 14:38:58 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point
{
    private:
        const Fixed x;
        const Fixed y;
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