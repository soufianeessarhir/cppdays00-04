/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 08:37:55 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 11:42:55 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){std::cout<<"ScavTrap default constructor is called\n";}

ScavTrap::ScavTrap(const ScavTrap &ob):ClapTrap(ob)
{
    std::cout<<"ScavTrap copy constructor is called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ob)
{
    std::cout<<"ScavTrap copy assinment constructor is called\n";
    if(this != &ob)
    {
       ClapTrap::operator=(ob);
    }
    return *this;
}
ScavTrap::~ScavTrap(){std::cout<<"ScavTrap destructor is called\n";}

ScavTrap::ScavTrap(const std::string str):ClapTrap(str)
{
    std::cout<<"ScavTrap string constructor is called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if(Hit_points && Energy_points)
    {
        std::cout<<this->Name<<" from ScavTrap attacks " <<target<<" causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
        Energy_points--;
    }
}
void ScavTrap::guardGate()
{
     std::cout<<this->Name<<" is in guardGate"<<std::endl;
}