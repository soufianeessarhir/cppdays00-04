/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:46:38 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 11:53:28 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
            std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator=(const DiamondTrap &);
        ~DiamondTrap();
        void whoAmI();
        void attack(const std::string& target);
};



#endif