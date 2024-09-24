/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 15:31:22 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-22 15:31:22 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
void display(void)
{
    std::cout<<"welcome to PhoneBook programm"<<std::endl;
    std::cout<<"type [SEARCH] :: to searching "<<std::endl;
    std::cout<<"type [ADD]    :: to adding new contact "<<std::endl;
    std::cout<<"type [EXIT]   :: to exit from the program"<<std::endl;

}
void displayall(PhoneBook ob)
{
    std::cout<<"all"<<std::endl;
}

void PhoneBook::add(Contact ob)
{
    PhoneBook::arr[PhoneBook::count % 8] = ob;
    PhoneBook::count++;
}
void PhoneBook::search(PhoneBook ob)
{
    std::string s;
    std::cout<<"type enter to display all contats or the first name to search for a specific contact"<<std::endl;
    std::cin>>s;
    if(s.compare("") == 0)
        displayall(ob);
    else
        std::cout << "lol"<<std::endl;

}
void PhoneBook::exit()
{
    std::cout<<"exit"<<std::endl;
}

Contact  creat_Contact(void)
{
    Contact obj;
    std::string tmp;
    std::cout<<"ener the first name"<<std::endl;
    std::cin >> tmp;
    obj.set_first_name(tmp);
    std::cout<<"ener the last name"<<std::endl;
    std::cin>> tmp;
    obj.set_last_name(tmp);
    std::cout<<"enter a nickname"<<std::endl;
    std::cin>> tmp;
    obj.set_nickname(tmp);
    std::cout<<"enter the phone number"<<std::endl;
    std::cin>> tmp;
    obj.set_phone_number(tmp);
    std::cout<<"enter a darkest secre"<<std::endl;
    std::cin>> tmp;
    obj.set_darkest_secret(tmp);
    return obj;
}
std::string sanitizeInput(const std::string input) {
    std::string sanitized;
    for (int i = 0;i < input.length();i++) {
        if (isprint(input[i])) {
            sanitized += input[i];
        }
    }
    return sanitized;
}

int main()
{
    std::string s;
    PhoneBook book;
    
    while(true)
    {
        display();
        std::cin.clear();
        std::cin.sync();
        if(!std::getline(std::cin, s))
        {
            if(std::cin.eof())
            {
                std::cout << "EOF detected. To continue, press Ctrl+C to exit or enter a command: ";
                freopen("/dev/tty", "r", stdin);
                std::cin.clear();
                continue;
            }
            else
            {
                std::cout << "Input error. Please try again.\n";
                continue;
            }
        }
        s = sanitizeInput(s);
        s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));
        s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
        if (s == "ADD")
            book.add(creat_Contact());
        else if (s == "SEARCH")
            book.search(book);
        else if (s == "EXIT")
            return(book.exit(),0);
        else
            std::cout << "Invalid command. Please try again.\n";
    }
    
    return 0;
}
