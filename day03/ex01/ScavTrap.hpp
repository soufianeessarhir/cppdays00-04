/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 18:39:33 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-28 18:39:33 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    public:
    void guardGate();
    ScavTrap();
    ScavTrap(const std::string);
    ~ScavTrap();
    ScavTrap(const ScavTrap &);
    ScavTrap &operator=(const ScavTrap &);
    void attack(const std::string& target);

};

#endif