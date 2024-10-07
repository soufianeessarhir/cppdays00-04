/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 16:06:04 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-30 16:06:04 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap
{
    private:
            std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator=(const DiamondTrap &);
        ~DiamondTrap();
};



#endif