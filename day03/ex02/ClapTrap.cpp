/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:39:02 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 12:50:19 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Hit_points(100),Energy_points(100),Attack_damage(30){std::cout<<"defaut canstructor is called \n";}

ClapTrap::ClapTrap(const std::string str):Hit_points(100),Energy_points(100),Attack_damage(30)
{
    std::cout<<"string canstructor is called \n";
    Name = str;
}
ClapTrap::ClapTrap(const ClapTrap &ob)
{
    std::cout<<"copy canstructor is called \n";
     *this = ob;
}
ClapTrap & ClapTrap::operator=(const ClapTrap &ob)
{
    std::cout<<"copy assignment canstructor is called \n";
    if(this != &ob)
    {
        this->Name = ob.Name;
        this->Hit_points = ob.Energy_points;
        this->Energy_points = ob.Energy_points;
        this->Attack_damage = ob.Attack_damage;

    }
    return *this;
}
ClapTrap::~ClapTrap(){std::cout<<"defaut destructor is called \n";}

void ClapTrap::attack(const std::string &target)
{
    if(Hit_points && Energy_points)
    {
        std::cout<<this->Name<<"attacks " <<target<<" causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
        Energy_points--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points >= amount)
    {
        std::cout<<"amount of"<<amount<<"is lost because of damage\n";
        this->Hit_points-= amount;   
    }
    else
    {
        std::cout<< this->Name<< "is already died\n";
        Hit_points = 0;
        Energy_points = 0;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points)
    {
        std::cout<<"winning amount of "<<amount<<" points because of Repairing \n";
        Hit_points+=amount;
        Energy_points--;
    }
}
