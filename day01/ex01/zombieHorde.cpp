/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:06:19 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:06:19 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zmds =  new Zombie[N];
    for (int i = 0; i < N; i++)
        zmds[i] = Zombie(name);
    return zmds;
}