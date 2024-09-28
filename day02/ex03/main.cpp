/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 15:16:15 by codespace         #+#    #+#             */
/*   Updated: 2024-09-27 15:16:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <vector>


int main() 
{
    Point a(0, 0), b(5, 0), c(2.5, 5);
    
    std::vector<Point> testPoints = {
        Point(2.5, 2.5),  // Inside
        Point(0, 5),      // Outside
        Point(2.5, 5),    // On edge
        Point(0, 0)       // On vertex
    };
    
    for (const auto& p : testPoints) {
        std::cout << "Point (" << p.get_x() << ", " << p.get_y() << ") is " 
                  << (bsp(a, b, c, p) ? "inside" : "outside") 
                  << " the triangle." << std::endl;
    }
    
    return 0;
}