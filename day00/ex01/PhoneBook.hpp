/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 15:30:35 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-22 15:30:35 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
        long long count;
        Contact arr[8]; 
public:
    PhoneBook();
    void add(Contact ob);
    void search(PhoneBook );
    void exit() const;
    void desplayall();
    bool is_valid_index(std::string& str, int& index);

};

#endif
