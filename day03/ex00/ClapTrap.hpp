/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 16:22:42 by codespace         #+#    #+#             */
/*   Updated: 2024-09-28 16:22:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
    std::string Name;
     int Hit_points = 10;
     int Energy_points = 10;
     int Attack_damage = 0;
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