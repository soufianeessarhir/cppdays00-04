/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 15:37:51 by sessarhi          #+#    #+#             */
/*   Updated: 2024-09-22 15:37:51 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void            Contact::set_first_name(std::string fname)     {first_name = fname;}
void            Contact::set_last_name(std::string lname)      {last_name = lname;}
void            Contact::set_nickname(std::string nname)       {nickname = nname;}
void            Contact::set_phone_number(std::string pn)      {phone_number =pn;}
void            Contact::set_darkest_secret(std::string ds)    {darkest_secret = ds;}


std::string     Contact::get_first_name()                      {return first_name;}
std::string     Contact::get_last_name()                       {return last_name;}
std::string     Contact::get_nickname()                        {return nickname;}
std::string     Contact::get_phone_number()                    {return phone_number;}
std::string     Contact::get_darkest_secret()                  {return darkest_secret;}

bool            Contact::is_all_filled()
                {
                    if(!(first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty()||darkest_secret.empty()))
                        return true;
                    return false;
                }