/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:07:11 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:07:11 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
   Zombie zombie("Foo");
    zombie.announce();
    Zombie *zombie2 = newZombie("Bar");
    zombie2->announce();
    randomChump("Baz");
    delete zombie2;
}