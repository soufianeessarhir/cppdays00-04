/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 16:27:50 by sessarhi          #+#    #+#             */
/*   Updated: 2024-12-01 16:27:50 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main()
{
    Harl ob;
    ob.complain("DEBUG");
    ob.complain("INFO");
    ob.complain("WARNING");
    ob.complain("ERROR");
    ob.complain("FATAL");
    return 0;
}