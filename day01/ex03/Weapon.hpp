/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:04:31 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:04:31 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{

    private:
    std::string type;

    public:
    const std::string getType();
    void setType(std::string );
    Weapon();
    Weapon(std::string);
    ~Weapon();
};
