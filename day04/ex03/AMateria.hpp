/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:55:33 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/08 20:19:20 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>
#include <string>
class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &src);
        AMateria &operator=(const AMateria &rhs);
        AMateria();
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};