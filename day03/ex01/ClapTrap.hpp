/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:22:42 by codespace         #+#    #+#             */
/*   Updated: 2024/12/07 11:15:56 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
            std::string Name;
            unsigned int  Hit_points;
            unsigned int Energy_points;
            unsigned int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(const std::string);
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap &);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif