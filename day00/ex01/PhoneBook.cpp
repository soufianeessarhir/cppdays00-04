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

std::string trim(std::string& str) {
    if (str.empty())
        return str;
    std::string::size_type pos = 0;
    while ((pos = str.find('\t', pos)) != std::string::npos) {
        str.replace(pos, 1, std::string(4, ' '));
        pos += 4;
    }
    const std::string whitespace = " \t\n\r\f\v";
    const size_t start = str.find_first_not_of(whitespace);
    if (start == std::string::npos)
        return "";
    const size_t end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}
void menu() 
{
    std::cout << "============================================\n";
    std::cout << "|              PHONEBOOK MENU              |\n"
                << "============================================\n"
              << "| 1. ADD    - Add a new contact            |\n"
              << "| 2. SEARCH - Search contacts              |\n"
              << "| 3. EXIT   - Exit program                 |\n"
                << "============================================\n"
              << "Enter command: ";

}
void PhoneBook::desplayall()
{
    std::cout<<"____________________________________________\n";
    std::cout << std::setw(10) << std::right << "Index" <<std::right << "|"
         << std::setw(10) << std::right << "First Name" <<  std::right << "|"
         << std::setw(10) << std::right << "Last Name" <<  std::right << "|"
         << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout<<"--------------------------------------------\n";
    for(int i = 0;i < (count < MAX_C ? count % MAX_C : MAX_C);i++)
    {
        std::cout << std::setw(10) << std::right << i << "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_first_name().length() > 10 ? PhoneBook::arr[i].get_first_name().substr(0, 9) + "." : PhoneBook::arr[i].get_first_name())<< "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_last_name().length() > 10 ? PhoneBook::arr[i].get_last_name().substr(0, 9) + "." : PhoneBook::arr[i].get_last_name()) <<  "|"
             << std::setw(10) << std::right << (PhoneBook::arr[i].get_nickname().length() > 10 ? PhoneBook::arr[i].get_nickname().substr(0, 9) + "." : PhoneBook::arr[i].get_nickname()) << std::endl;
    }
    std::cout<<"--------------------------------------------\n";
}

void PhoneBook::add(Contact ob)
{
    if(ob.is_all_filled())
    {
        PhoneBook::arr[PhoneBook::count % MAX_C] = ob;
        PhoneBook::count++;
    }
    else
        std::cout<<"empty filed(s) detected the contact would not be saved\n";
}
bool PhoneBook::is_valid_index(std::string& str, int& index) 
{
    str = trim(str);
    if (str.empty()) return false;
    if(str.length() > std::to_string(MAX_C).length())
        return false;
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
    if (ob.count == 0) 
    {
        std::cout << "\n          No contacts available.\n\n";
        return;
    }
    ob.desplayall();
    std::string input;
    int index;
    std::cout << "Enter index (0 - 7) to show contact details: ";
    std::getline(std::cin, input);
    if (!is_valid_index(input, index)) {
        std::cout << "Invalid index. Please try again.\n";
        return;
    }
    if(index >= 0 && index < (ob.count < MAX_C ? ob.count % MAX_C : MAX_C))
    {
        std::cout<<"--------------------------------------------\n";
        std::cout
         << "|First Name      :        " << ob.arr[index].get_first_name()  <<"\n"
         << "| Last Name      :        " <<ob.arr[index].get_last_name()    <<"\n"
         << "| Nickname       :        " <<ob.arr[index].get_nickname()     <<"\n"
         << "| phone number   :        " <<ob.arr[index].get_phone_number() <<"\n"
         << "| darkest secret :        " <<ob.arr[index].get_darkest_secret() << "\n";
         std::cout<<"--------------------------------------------\n\n";
    }
    else
        std::cout<<"\n           index out of bounds\n\n";
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
    contact.set_first_name(trim(input));
    
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    contact.set_last_name(trim(input));
    
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    contact.set_nickname(trim(input));
    
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    contact.set_phone_number(trim(input));
    
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    contact.set_darkest_secret(trim(input));
    
    return contact;
}

bool _input_check(std::string& input)
{
    input = trim(input);
    if (input.empty()) return false;
    for (size_t i = 0; i < input.length(); i++) {
        if (!(std::isalpha(input[i]) && std::isupper(input[i]))) 
            return false;
    }
    return true;
}

int main() 
{
    PhoneBook book;
    std::string command;

    while (true) 
    {
        menu();
        if (!std::getline(std::cin, command)) {
            if (std::cin.eof()) {
                std::cout << "\nEOF detected. Program terminating.\n";
                break;
            }
            std::cin.clear();
            continue;
        }
        if (_input_check(command)) 
        {
            if (command.empty()) continue;
            if (command == "ADD")
                book.add(create_contact());
            else if (command == "SEARCH") 
                book.search(book);
            else if (command == "EXIT") {
                book.exit();
                break;
            }
            else
                std::cout << "Invalid command. Please try again.\n";
        }
        else
            std::cout << "Invalid command. Please try again.\n";
    }
    return 0;
}
         