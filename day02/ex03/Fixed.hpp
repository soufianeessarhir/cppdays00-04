/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 14:36:37 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 14:36:37 by sessarhi         ###   ########.fr       */
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
    int getRawBits( void )const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    bool operator<(Fixed &)const ;
    bool operator>(Fixed &)const ;
    bool operator<=(Fixed &)const ;
    bool operator>=(Fixed &)const ;
    bool operator==(Fixed &)const ;
    bool operator!=(Fixed &)const ;

    Fixed  operator+(const Fixed &)const;
    Fixed  operator-(const Fixed &)const;
    Fixed  operator*(const Fixed &)const;
    Fixed  operator/(const Fixed &)const;

    Fixed  &operator++();
    Fixed  &operator--();
    Fixed  operator++(int);
    Fixed  operator--(int);
    static Fixed &min(Fixed &,Fixed &);
    static const Fixed &min(const Fixed &,const Fixed &);
    static Fixed &max(Fixed &,Fixed &);
    static const Fixed &max(const Fixed &,const Fixed &);
};
std::ostream& operator<<(std::ostream& , const Fixed& );


#endif