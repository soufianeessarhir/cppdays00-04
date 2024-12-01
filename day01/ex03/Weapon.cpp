/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 15:56:21 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 15:56:21 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string str)
{
    type = str;
};

Weapon::~Weapon(){};

const std::string& Weapon::getType(){return type;}

void Weapon::setType(std::string ob)
{
  type = ob;
}

