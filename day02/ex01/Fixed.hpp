/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 13:20:59 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 13:20:59 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
    private:
        int nb;
        static const int bits;
    public:
        Fixed(const Fixed &);
        Fixed&operator=(const Fixed &);
        Fixed();
        Fixed(const int);
        Fixed(const float);
        ~Fixed();
        int getRawBits( void )const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& , const Fixed& );

#endif