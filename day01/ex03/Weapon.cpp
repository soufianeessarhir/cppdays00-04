/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 14:48:09 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 14:48:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string str)
{
    type = str;
};

Weapon::~Weapon(){};
const std::string Weapon::getType(){return type;}
void Weapon::setType(std::string ob)
{
  type = ob;
}

