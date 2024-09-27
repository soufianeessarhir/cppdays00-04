/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 14:50:27 by codespace         #+#    #+#             */
/*   Updated: 2024-09-27 14:50:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(){ std::cout<<"Default constructor called\n";}
Fixed::~Fixed(){std::cout<<"Destructor called\n";}
Fixed& Fixed::operator=(const Fixed& ob)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &ob)
        this->nb = ob.nb;
    return *this;
}
Fixed::Fixed(const Fixed &ob) {
    std::cout << "Copy constructor called\n";
    *this = ob;
}

int Fixed::getRawBits( void )
{
    std::cout<<"getRawBits member function called\n";
    return nb;
}
void Fixed::setRawBits( int const raw )
{
    std::cout<<"setRawBits member function called\n";
    nb = raw;
}
Fixed::Fixed(const int n) : nb(n << bits) {std::cout<<"Int constructor called\n";}
Fixed::Fixed(const float n) :nb (roundf(n * (1<<bits))){std::cout<<"Float constructor called\n";}
int Fixed::toInt(void)const
{
    return(((nb >> bits)));
}

float Fixed::toFloat() const 
{
   return static_cast<float>(nb) / (1 << bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}