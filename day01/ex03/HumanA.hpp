/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 14:58:54 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 14:58:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
        Weapon &weapen;
        std::string name;
public:
    // HumanA();
    HumanA(std::string,Weapon &ob);
    ~HumanA();
    void attack(void);

};

#endif