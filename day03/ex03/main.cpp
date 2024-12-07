/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:44:19 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 11:54:26 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::string str = "said";
    DiamondTrap d("lol");
    d.whoAmI();
    d.attack(str);
    d.takeDamage(2);
    d.beRepaired(5);
    d.guardGate();
    d.highFivesGuys();
    d.whoAmI();
    d.attack(str);
}