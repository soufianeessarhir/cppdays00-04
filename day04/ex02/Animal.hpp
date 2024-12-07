/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:40:04 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 09:51:55 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class Animal
{

    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);
        virtual ~Animal();
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
};