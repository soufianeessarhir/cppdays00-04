/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:20:47 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/06 18:21:20 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    if(this == &src)
        return (*this);
    for(int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout << "Brain assignation operator called" << std::endl;
    return (*this);
}