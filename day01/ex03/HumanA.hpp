/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:04:02 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:04:02 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
    private:
            Weapon &weapen;
            std::string name;
    public:
        HumanA(std::string,Weapon &ob);
        ~HumanA();
        void attack(void);

};
