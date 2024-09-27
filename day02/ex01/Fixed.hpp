/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 12:09:58 by codespace         #+#    #+#             */
/*   Updated: 2024-09-27 12:09:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    int getRawBits( void );
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& , const Fixed& );


#endif