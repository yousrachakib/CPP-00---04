/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:29:35 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/29 15:08:38 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() 
{
    const int arraySize = 10;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize; ++i) 
    {
        if (i < arraySize / 2) 
        {
            animals[i] = new Dog();
        } 
        else 
        {
            animals[i] = new Cat();
        }
    }

    // Loop over the array and delete each Animal
    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }
    return 0;
}
