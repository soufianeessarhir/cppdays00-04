/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 12:44:33 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-22 12:44:33 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac,char **av)
{
    if (ac > 1)
    {
        for(size_t i = 1; i < (size_t)ac; i++)
        {
            std :: string str = av[i];
            for(size_t j = 0; j < str.length(); j++)
                std :: cout << (char)std :: toupper(str[j]);
        }
        std :: cout << std :: endl;
    }
    else
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
    return 0;
}