/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:42:57 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/10 13:38:07 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    if(this == &src)
        return (*this);
    this->type = src.type;
    std::cout << "Animal assignation operator called" << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}
