/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 15:02:53 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 15:02:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

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

#endif