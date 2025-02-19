/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:50:03 by sessarhi          #+#    #+#             */
/*   Updated: 2025/02/16 12:55:30 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &src):Animal()
{
    *this = src;
	this->brain = new Brain(*src.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    if(this == &src)
        return (*this);
    this->type = src.type;
	*this->brain = *src.brain;
    std::cout << "Cat assignation operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou miaou" << std::endl;
}
std::string Cat::getType()const
{
    return (this->type);
}