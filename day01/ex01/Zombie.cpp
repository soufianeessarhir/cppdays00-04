/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 10:47:46 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 10:47:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string str)
{
    name = str;
}
void Zombie::announce()
{
    std::cout<<name<<": "<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::~Zombie()
{
    // std::cout<<"Zombie"<<name<<"has been destroyed"<<std::endl;
}
Zombie::Zombie(){}