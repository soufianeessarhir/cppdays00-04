/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:47:16 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/06 18:48:51 by sessarhi         ###   ########.fr       */
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
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &src):Animal()
{
    *this = src;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    if(this == &src)
        return (*this);
    this->type = src.type;
    std::cout << "Dog assignation operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    delete brain;
    std::cout << "Wouf wouf" << std::endl;
}