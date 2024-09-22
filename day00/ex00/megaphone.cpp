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

int main(int ac, char **av)
{
    int i = 0,j;
    if (ac > 1)
    {
        while(++i < ac)
        {
            int vlen =  strlen(av[i]);
            j=-1;
            while(++j < vlen)
                std::cout << (char)toupper(av[i][j]) ;
        }
         std :: cout << std::endl;
    }
    else
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
    return 0;
}