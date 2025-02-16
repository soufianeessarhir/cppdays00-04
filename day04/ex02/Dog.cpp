/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:47:16 by sessarhi          #+#    #+#             */
/*   Updated: 2025/02/16 12:56:01 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &src):Animal()
{
    *this = src;
	this->brain = new Brain(*src.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    if(this == &src)
        return (*this);
    this->type = src.type;
	*this->brain = *src.brain;
    std::cout << "Dog assignation operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouf wouf" << std::endl;
}

std::string Dog::getType()const
{
    return (this->type);
}
