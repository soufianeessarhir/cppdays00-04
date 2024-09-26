/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 15:26:01 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 15:26:01 by codespace        ###   ########.fr       */
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
    std::cout << name << " attacks with their " << (*weapen).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &ob)
{
    weapen = &ob;
}