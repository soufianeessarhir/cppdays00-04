/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:10:57 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/08 20:05:48 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : Name(name)
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

Character::Character(const Character &ob)
{
    *this = ob;
}

Character &Character::operator=(const Character &ob)
{
    if (this != &ob)
    {
        this->Name = ob.Name;
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
                delete this->materia[i];
            this->materia[i] = ob.materia[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
}

std::string const & Character::getName() const
{
    return (Name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!materia[i])
        {
            materia[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && materia[idx])
        materia[idx]->use(target);
}
