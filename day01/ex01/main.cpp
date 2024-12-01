/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 14:05:48 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 14:05:48 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 12;
    Zombie *zm = zombieHorde(n,"name");
    for (int i = 0; i < n; i++)
    {
        zm[i].announce();
    }
    delete [] zm;
    return 0;
}