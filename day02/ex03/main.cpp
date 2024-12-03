/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 14:35:29 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 14:35:29 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"


int main() 
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 5);
    
    Point p1(5.000001, 5);  // Extremely close to triangle edge out
    Point p2(5, 5);         // On the triangle edge
    Point p3(5, 4);         // Inside the triangle
    Point p4(5, 6);         // outside the triangle
    Point p5(0, 0);         // On the triangle vertex
    Point p6(0, 1);         // outside the triangle
    Point p7(5, 4.000009);  // Extremely close to triangle edge in
    std::cout << "Point p1 is inside the triangle: " << bsp(a, b, c, p1) << std::endl;
    std::cout << "Point p2 is outside the triangle: " << bsp(a, b, c, p2) << std::endl;
    std::cout << "Point p3 is inside the triangle: " << bsp(a, b, c, p3) << std::endl;
    std::cout << "Point p4 is outside the triangle: " << bsp(a, b, c, p4) << std::endl;
    std::cout << "Point p5 is outside the triangle: " << bsp(a, b, c, p5) << std::endl;
    std::cout << "Point p6 is outside the triangle: " << bsp(a, b, c, p6) << std::endl;
    std::cout << "Point p7 is inside the triangle: " << bsp(a, b, c, p7) << std::endl;
    return 0;
}