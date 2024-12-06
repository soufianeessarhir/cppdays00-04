/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:12:24 by sessarhi          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:24 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &src);
        ~Brain();
};