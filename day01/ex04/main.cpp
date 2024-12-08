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

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

void replace_acc(std::string to_find ,std::string to_replace,std::string newfile,std::string str)
{
    size_t pos = 0;
    while ((pos = str.find(to_find, pos)) != std::string::npos)  
    {
        str.erase(pos, to_find.length());
        str.insert(pos, to_replace);
        pos += to_replace.length();  
    }
    std::ofstream rp_file((newfile + ".replace"));
    if (rp_file.is_open())
    {
        rp_file<<str;
        rp_file.close();
    }
    else
        std::cout<<"error when opening file for writing\n";
}
void replaceInFile(char **av)
{
    std::ifstream file(av[1]);
    if(!file)
         std::cout<<"couldn't open the file\n";
    else
    {
        std::stringstream buff;
        buff << file.rdbuf();
        file.close();
        std::string str = buff.str();
        replace_acc(av[2],av[3],av[1],str);
    }

}
int main(int ac, char **av)
{
    if (ac == 4)
    {
        if(!av[1] || !*av[1] || !av[2] || !*av[2] || !av[3] || !*av[2])
            return 0;
        replaceInFile(av);
    }
    else
        std::cout<<"\n\tincorect number of arguments\n";
    
    return 0;
}