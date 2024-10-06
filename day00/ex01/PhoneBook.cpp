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

PhoneBook::PhoneBook():count(0){}

void menu() 
{
    std::cout << "\nPHONEBOOK MENU\n"
              << "1. ADD    - Add a new contact\n"
              << "2. SEARCH - Search contacts\n"
              << "3. EXIT   - Exit program\n"
              << "Enter command: ";
}

void PhoneBook::desplayall()
{
    std::cout << std::setw(10) << std::right << "Index" <<std::right << "|"
         << std::setw(10) << std::right << "First Name" <<  std::right << "|"
         << std::setw(10) << std::right << "Last Name" <<  std::right << "|"
         << std::setw(10) << std::right << "Nickname" << std::endl;
    for(int i = 0;i < (count < 8 ? count % 8 : 8);i++)
    {
        std::cout << std::setw(10) << std::right << i << "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_first_name().length() > 10 ? PhoneBook::arr[i].get_first_name().substr(0, 9) + "." : PhoneBook::arr[i].get_first_name())<< "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_last_name().length() > 10 ? PhoneBook::arr[i].get_last_name().substr(0, 9) + "." : PhoneBook::arr[i].get_last_name()) <<  "|"
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
bool PhoneBook::is_valid_index(std::string& str, int& index) 
{
    if (str.empty()) return false;
    
    for(size_t i = 0; i < str.length(); i++)
    {
        if(!std::isdigit(str[i]))
            return false;
    }
    index = std::atoi(str.c_str());
    return true;
}

void PhoneBook::search(PhoneBook ob)
{
    if (ob.count == 0) {
        std::cout << "No contacts available.\n";
        return;
    }
    ob.desplayall();
    std::string input;
    int index;
    std::cout<<"choose an index to show all the information of a specific contact"<<std::endl;
    std::getline(std::cin, input);
    if (!is_valid_index(input, index)) {
        std::cout << "Invalid index. Please try again.\n";
        return;
    }
    if(index >= 0 && index < 8 && !(index > ob.count && ob.count < 8))
    {
        std::cout<<"--------------------------------------------\n";
        std::cout
         << "First Name     :     " << ob.arr[index].get_first_name()  <<"\n"
         << "Last Name      :     " <<ob.arr[index].get_last_name()    <<"\n"
         << "Nickname       :     " <<ob.arr[index].get_nickname()     <<"\n"
         << "phone number   :     " <<ob.arr[index].get_phone_number() <<"\n"
         << "darkest secret :     " <<ob.arr[index].get_darkest_secret() <<std::endl;
         std::cout<<"--------------------------------------------\n";
    }
    else
        std::cout<<"index out of bounds\n";
}
void PhoneBook::exit()const 
{
    std::cout << "Goodbye!\n";
}
Contact create_contact() 
{
    Contact contact;
    std::string input;
    
    std::cout<<"\n";
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    contact.set_first_name(input);
    
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    contact.set_last_name(input);
    
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    contact.set_nickname(input);
    
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    contact.set_phone_number(input);
    
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    contact.set_darkest_secret(input);
    
    return contact;
}

std::string sanitize_input(const std::string& input)
{
    std::string sanitized;
    for (size_t i = 0; i < input.length(); i++) {
        if (std::isalpha(input[i])) {
            sanitized += input[i];
        }
    }
    return sanitized;
}

int main() 
{
    PhoneBook book;
    std::string command;

    while (true) {
        menu();
        
        if (!std::getline(std::cin, command)) {
            if (std::cin.eof()) {
                std::cout << "\nEOF detected. Program terminating.\n";
                break;
            }
            std::cin.clear();
            continue;
        }

        command = sanitize_input(command);
        if (command.empty()) continue;

        if (command == "ADD") {
            book.add(create_contact());
        } else if (command == "SEARCH") {
            book.search(book);
        } else if (command == "EXIT") {
            book.exit();
            break;
        } else {
            std::cout << "Invalid command. Please try again.\n";
        }
    }
    return 0;
}
         