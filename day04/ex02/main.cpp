/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:52:26 by sessarhi          #+#    #+#             */
/*   Updated: 2025/02/16 13:06:57 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>
int main()
{
    int n = 10;
    
    Animal **arr = new Animal*[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
        arr[i]->makeSound();
    }
    for (int i = 0; i < n; i++)
    {
       delete arr[i];
    }
    delete[] arr;
    
    return 0;
}
