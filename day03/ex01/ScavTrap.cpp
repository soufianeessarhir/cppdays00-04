/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 08:37:55 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-30 08:37:55 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){std::cout<<"ScavTrap default constructor is called\n";}
ScavTrap::ScavTrap(const ScavTrap &ob)
{
    *this = ob;
    std::cout<<"ScavTrap copy constructor is called\n";
}
ScavTrap& ScavTrap::operator=(const ScavTrap &ob)
{
    std::cout<<"ScavTrap copy assinment constructor is called\n";
    if(this != &ob)
    {
        this->Name = ob.Name;
        this->Hit_points = ob.Hit_points;
        this->Energy_points = ob.Energy_points;
        this->Attack_damage=ob.Attack_damage;
    }
    return *this;
}
ScavTrap::~ScavTrap(){std::cout<<"ScavTrap destructor is called\n";}
ScavTrap::ScavTrap(const std::string str)
{
    std::cout<<"ScavTrap string constructor is called\n";
    Name = str;
}
void ScavTrap::attack(const std::string& target)
{
    if(Hit_points)
    {
        std::cout<<this->Name<<"from ScavTrap attacks " <<target<<" causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
        Energy_points--;
    }
}
void ScavTrap::guardGate()
{
     std::cout<<this->Name<<"is in guardGate"<<std::endl;
}