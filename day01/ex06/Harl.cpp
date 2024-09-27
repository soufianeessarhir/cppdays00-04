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

void Harl::complain(std::string level)
{
     void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
     for (i = 0; i < 4; i++)
     {
       if(level == levels[i])
        break;
     }
    switch (i)
    {
    case 0:
        for(;i<4;i++)
            (this->*functions[i])();
        break;
    case 1:
         for(;i<4;i++)
            (this->*functions[i])();
        break;
    case 2:
        for(;i<4;i++)
            (this->*functions[i])();
        break;
    case 3:
        for(;i<4;i++)
            (this->*functions[i])();
        break;
    default:
        std::cout<<"no matching method for the entered level\n";
        break;
    }
}