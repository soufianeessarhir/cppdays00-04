/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:28:22 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 11:36:15 by sessarhi         ###   ########.fr       */
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
     std::cout << "High five, buddy! o/" << std::endl;
}

FragTrap::~FragTrap(){std::cout<<"FragTrap destructor is called\n";}