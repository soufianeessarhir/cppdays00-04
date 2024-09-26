/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 18:48:06 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 18:48:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
private:
   void debug( void );
   void info( void );
   void warning( void );
   void error( void );
public:
    Harl();
    ~Harl();
    void complain( std::string level );
};



#endif