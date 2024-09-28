/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 14:38:36 by codespace         #+#    #+#             */
/*   Updated: 2024-09-28 14:38:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(const Point& a, const Point& b, const Point& c) 
{
    return 0.5 * std::abs(a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float t_a = area(a,b,c);
    float u = area(a,b,point)/t_a;
    float v = area(a,point,c)/t_a;
    float w = area(point,b,c)/t_a;
    return ((u + v + w - 1.0f) == 0 && u && v && w);
}