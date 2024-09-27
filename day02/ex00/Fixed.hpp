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

class Fixed
{
private:
    int nb;
    static const int bits;
public:
    Fixed(Fixed &);
    Fixed&operator=(const Fixed &);
    Fixed();
    ~Fixed();
    int getRawBits( void );
    void setRawBits( int const raw );
};



#endif