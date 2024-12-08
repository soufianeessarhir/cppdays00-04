/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 19:29:25 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/08 19:31:44 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ob)
{
    *this = ob;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ob)
{
    if (this != &ob)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
                delete this->materia[i];
            this->materia[i] = ob.materia[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            return (materia[i]->clone());
    }
    return (NULL);
}
