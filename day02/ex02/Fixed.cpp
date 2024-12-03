/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 13:24:16 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-03 13:24:16 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed():nb(0) { /*std::cout<<"Default constructor called\n";*/}

Fixed::~Fixed( ){/*std::cout<<"Destructor called\n";*/}

Fixed& Fixed::operator=(const Fixed& ob)
{
    // std::cout << "Copy assignment operator called\n";
    if (this != &ob)
        this->nb = ob.nb;
    return *this;
}

Fixed::Fixed(const Fixed &ob) {
    // std::cout << "Copy constructor called\n";
    *this = ob;
}
int Fixed::getRawBits( void )const
{
    // std::cout<<"getRawBits member function called\n";
    return nb;
}
void Fixed::setRawBits( int const raw )
{
    // std::cout<<"setRawBits member function called\n";
    nb = raw;
}
Fixed::Fixed(const int n) : nb(n << bits) {/*std::cout<<"Int constructor called\n";*/}
Fixed::Fixed(const float n) :nb (roundf(n * (1<<bits))){/*std::cout<<"Float constructor called\n";*/}
int Fixed::toInt(void)const{return(((nb >> bits)));}
float Fixed::toFloat() const {return static_cast<float>(nb) / (1 << bits);}
std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
bool Fixed::operator> (Fixed &ob)const{return (this->nb >  ob.nb);}
bool Fixed::operator< (Fixed &ob)const{return (this->nb <  ob.nb);}
bool Fixed::operator<=(Fixed &ob)const{return (this->nb <= ob.nb);}
bool Fixed::operator>=(Fixed &ob)const{return (this->nb >= ob.nb);}
bool Fixed::operator==(Fixed &ob)const{return (this->nb == ob.nb);}
bool Fixed::operator!=(Fixed &ob)const{return (this->nb != ob.nb);}


Fixed  Fixed::operator+(const Fixed &ob)const{return Fixed(this->toFloat() + ob.toFloat());}
Fixed  Fixed::operator*(const Fixed &ob)const{return Fixed(this->toFloat() * ob.toFloat());}
Fixed  Fixed::operator-(const Fixed &ob)const{return Fixed(this->toFloat() - ob.toFloat());}
Fixed  Fixed::operator/(const Fixed &ob)const{return Fixed(this->toFloat() / ob.toFloat());}
Fixed  Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++*this;
    return tmp;
}
Fixed  Fixed::operator--(int)
{
    Fixed tmp = *this;
    --*this;
    return tmp;
}
Fixed  &Fixed::operator--()
{
   this->nb -=1;
    return *this;
}
Fixed  &Fixed::operator++()
{
   this->nb +=1;
    return *this;
}
Fixed &Fixed::min(Fixed &o1,Fixed &o2){return( o1.nb <= o2.nb ? o1:o2);}
const Fixed &Fixed::min(const Fixed &o1,const Fixed &o2){return( o1.nb <= o2.nb ? o1:o2);}
Fixed &Fixed::max(Fixed &o1,Fixed &o2){return( o1.nb >= o2.nb ? o1:o2);}
const Fixed &Fixed::max(const Fixed &o1,const Fixed &o2){return( o1.nb >= o2.nb ? o1:o2);}