/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:27:19 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/08 16:38:44 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    Ice(const Ice &ob);
    Ice & operator=(const Ice &ob);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
};
