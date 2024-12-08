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
#include <cctype>

int main(int ac,char **av)
{
    if (ac == 1)
       return(std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl, 0); 
    for(int i = 1; i < ac; i++)
    {
        std :: string str = av[i];
        for(std::string::iterator it = str.begin(); it != str.end(); ++it)
            *it = static_cast<char>(std::toupper(static_cast<unsigned char>(*it)));
        std :: cout << str;
    }
    return (std :: cout << std :: endl,0);
}