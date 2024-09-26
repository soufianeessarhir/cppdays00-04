/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 14:39:10 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 14:39:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPEN_HPP
#define WEAPEN_HPP

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

#endif