/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:06:27 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:06:27 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        Zombie(std::string);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
