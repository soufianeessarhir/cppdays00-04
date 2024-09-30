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
FragTrap::FragTrap(const std::string str):ClapTrap(str) {std::cout<<"FragTrap string constructor is called\n";}
FragTrap::FragTrap(const FragTrap &ob):ClapTrap(ob){ std::cout<<"FragTrap copy constructor is called\n";}
FragTrap& FragTrap:: operator=(const FragTrap &ob)
{
    std::cout<<"FragTrap copy assinment constructor is called\n";
    if(this != &ob)
    {
       ClapTrap::operator=(ob);
    }
    return *this;
}
void FragTrap::highFivesGuys()
{
    std::cout<<"FragTrap"<<std::endl;
}
FragTrap::~FragTrap(){std::cout<<"ScavTrap destructor is called\n";}