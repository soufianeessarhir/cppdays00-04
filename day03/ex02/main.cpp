/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:29:05 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/07 11:29:06 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap s("lol");
    s.beRepaired(5);
    s.guardGate();
    s.takeDamage(2);

    FragTrap g("lol");
    g.beRepaired(5);
    g.highFivesGuys();
    g.takeDamage(2);
    std::string str = "said";
    ClapTrap b("hamid");
    ClapTrap a(b);
    b.attack(str);
}