/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 10:44:00 by codespace         #+#    #+#             */
/*   Updated: 2024-09-26 10:44:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    int n = 12;
    Zombie *zm = zombieHorde(n,"name");
    for (int i = 0; i < n; i++)
    {
        zm->announce();
    }
    delete [] zm;
    return 0;
}