/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:52:18 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 12:05:47 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string str): ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str)
{
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
    Name = str;
    std::cout << "DiamondTrap string constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ob) :ClapTrap(ob),ScavTrap(ob),FragTrap(ob)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = ob;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &ob)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &ob)
    {
     ClapTrap::operator=(ob);
     ScavTrap::operator=(ob);
     FragTrap::operator=(ob);
     
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}