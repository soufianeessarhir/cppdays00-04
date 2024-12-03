/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 09:05:50 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 09:05:50 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits=8;

Fixed::Fixed():nb(0) { std::cout<<"Default constructor called\n";}

Fixed::~Fixed(){std::cout<<"Destructor called\n";}

Fixed&  Fixed::operator=(const Fixed& ob)
{
    std::cout<<"Copy assignment operator called\n";
    if (this != &ob)
        this->nb = ob.getRawBits();
    return *this;
}
Fixed::Fixed(Fixed &ob)
{
    std::cout<<"Copy constructor called\n";
    *this = ob;
}

int Fixed::getRawBits( void ) const
{
    std::cout<<"getRawBits member function called\n";
    return nb;
}
void Fixed::setRawBits( int const raw )
{
    std::cout<<"setRawBits member function called\n";
    nb = raw;
}


