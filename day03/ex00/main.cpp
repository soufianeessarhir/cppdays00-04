/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:17:57 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 10:49:01 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::string str = "said";
    ClapTrap b("hamid");
    ClapTrap a;
    b.attack(str);
    b.beRepaired(2);
    
}