/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:04:20 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:04:20 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
            Weapon *weapen;
            std::string name;
    public:
        HumanB();
        HumanB(std::string);
        void setWeapon(Weapon &ob);
        ~HumanB();
        void attack(void);
};
