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
    std::cout<<"type -> SEARCH : to search in contacts"<<std::endl;
    std::cout<<"type -> ADD    : to add a new contact "<<std::endl;
    std::cout<<"type -> EXIT   : to exit from the program"<<std::endl;

}
void PhoneBook::desplayall()
{
    std::cout << std::setw(10) << std::right << "Index" << std::setw(10) << std::right << "|"
         << std::setw(10) << std::right << "First Name" << std::setw(10) << std::right << "|"
         << std::setw(10) << std::right << "Last Name" << std::setw(10) << std::right << "|"
         << std::setw(10) << std::right << "Nickname" << std::endl;
    for(int i = 0;i < (count < 8 ? count % 8 : 8);i++)
    {
        std::cout << std::setw(10) << std::right << i << std::setw(10) << std::right << "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_first_name().length() > 10 ? PhoneBook::arr[i].get_first_name().substr(0, 9) + "." : PhoneBook::arr[i].get_first_name()) << std::setw(10) << std::right << "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_last_name().length() > 10 ? PhoneBook::arr[i].get_last_name().substr(0, 9) + "." : PhoneBook::arr[i].get_last_name()) << std::setw(10) << std::right << "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_nickname().length() > 10 ? PhoneBook::arr[i].get_nickname().substr(0, 9) + "." : PhoneBook::arr[i].get_nickname()) << std::endl;
    }
}

void PhoneBook::add(Contact ob)
{
    if(ob.is_all_filled())
    {
        PhoneBook::arr[PhoneBook::count % 8] = ob;
        PhoneBook::count++;
    }
    else
        std::cout<<"empty filed(s) detected the contact would not be saved\n";
}
void PhoneBook::search(PhoneBook ob)
{
    ob.desplayall();
    int index;
    std::cout<<"choose an index to show all the information of a specific contact"<<std::endl;
    std::cin>>index;
    if(index>=0 && index < 8 && !(index > ob.count && ob.count < 8))
    {
        std::cout
         << "First Name   :     " << ob.arr[index].get_first_name()  <<"\n"
         << "Last Name    :     " <<ob.arr[index].get_last_name()    <<"\n"
         << "Nickname     :     " <<ob.arr[index].get_nickname()     <<"\n"
         << "phone number :     " <<ob.arr[index].get_phone_number() <<"\n"
         << "darkest secr :     " <<ob.arr[index].get_darkest_secret() <<std::endl;
    }
    else
        std::cout<<"index out of bounds\n";
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
    bool displayPrompt = true;
    
    while(true)
    {
        if(displayPrompt)
            display(),displayPrompt=false;
        if(!std::getline(std::cin, s))
        {
            if(std::cin.eof())
            {
                std::cout << "EOF detected. To continue, press Ctrl+C to exit or enter a command: ";
                std::cin.clear();
                freopen("/dev/tty", "r", stdin);          
            
            }
            else
                std::cout << "Input error. Please try again.\n";
            continue;
        }
        s = sanitizeInput(s);
        s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));
        s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
        if (s == "ADD")
            book.add(creat_Contact()),displayPrompt=true;
        else if (s == "SEARCH")
            book.search(book),displayPrompt=true;
        else if (s == "EXIT")
            return(book.exit(),0);
        else if (!s.empty())
            std::cout << "Invalid command. Please try again.\n";
    }
    return 0;
}
         