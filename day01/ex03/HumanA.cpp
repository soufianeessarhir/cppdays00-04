/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 15:03:36 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 15:03:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(){}
HumanA::~HumanA(){}
HumanA::HumanA( std::string str, Weapon& ob):name(str), weapen(ob){}
void HumanA::attack()
{
    std::cout<<name<<"attacks with their "<<weapen.getType()<<std::endl;
}
