/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:04:18 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/08 22:01:30 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

AMateria::AMateria()
{
}



