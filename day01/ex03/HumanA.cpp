/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:05:24 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:05:24 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::~HumanA(){}
HumanA::HumanA( std::string str, Weapon& ob):weapen(ob),name(str) {}
void HumanA::attack()
{
    std::cout<<name<<"attacks with their "<<weapen.getType()<<std::endl;
}
