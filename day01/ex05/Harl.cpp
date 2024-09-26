/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 18:58:13 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 18:58:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}
void Harl::error(void)
{
    std::cout<<"error\n";
}

void Harl::debug(void)
{
    std::cout<<"debug\n";
}
void Harl::warning()
{
    std::cout<<"warning\n";
}
void Harl::info()
{
   std::cout<<"info\n"; 
}

// void Harl::complain(std::string level)
// {
//     void(Harl )
// }