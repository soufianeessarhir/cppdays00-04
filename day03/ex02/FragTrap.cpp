/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 12:36:11 by codespace         #+#    #+#             */
/*   Updated: 2024-09-30 12:36:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap() {std::cout<<"FragTrap default constructor is called"<<std::endl;}
FragTrap::FragTrap(const std:string str):CalpTrap(str){std::cout<<"FragTrap string constructor is called\n";}
FragTrap::FragTrap(const FragTarp &ob):CalpTrap(ob){ std::cout<<"FragTrap copy constructor is called\n";}
FragTrap&operator=(const FragTarp &ob)
{
    std::cout<<"FragTrap copy assinment constructor is called\n";
    if(this !- &ob)
    {
       ClapTrap::operator=(ob);
    }
    return *This;
}
void FagTrap::highFivesGuys()
{
    std::cout<<"FragTrap"<<std::endl;
}
FragTrap::~FragTrap(){std::cout<<"ScavTrap destructor is called\n";}