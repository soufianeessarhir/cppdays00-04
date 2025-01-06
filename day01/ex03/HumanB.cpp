/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:05:14 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:05:14 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::HumanB(std::string s)
{
    weapen = NULL;
    name = s;
}
HumanB::~HumanB(){}

void HumanB::attack()
{
    if (weapen)
    std::cout << name << " attacks with their " << (*weapen).getType() << std::endl;
    std::cout << name << " attacks without weapen "<< std::endl;

}

void HumanB::setWeapon(Weapon &ob)
{
    weapen = &ob;
}