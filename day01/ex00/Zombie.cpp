/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:06:35 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:06:35 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
}
void Zombie::announce()
{
    std::cout<<name<<" : "<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::~Zombie()
{
    std::cout<<"Zombie"<<name<<"has been destroyed"<<std::endl;
}