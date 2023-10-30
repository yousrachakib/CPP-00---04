/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:37:53 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 15:48:41 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    std::string doog = "Mike";
    std::string caat = "Mimi";
    const Animal* meta = new Animal();
    const Animal* j = new Dog(doog);
    const Animal* i = new Cat(caat);

    std::cout << "Animal type: " << meta->get_type() << std::endl;
    std::cout << "Dog type: " << j->get_type() << std::endl;
    std::cout << "Cat type: " << i->get_type() << std::endl;

    std::cout << std::endl;

    std::cout << "Calling makeSound() on Cat:" << std::endl;
    i->makeSound(); // Output: "Meow!"

    std::cout << std::endl;

    std::cout << "Calling makeSound() on Dog:" << std::endl;
    j->makeSound(); // Output: "Woof!??

    std::cout << std::endl;

    std::cout << "Calling makeSound() on Animal:" << std::endl;
    meta->makeSound();
    std::cout << std::endl;

	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	std::cout << Wi->getType() << " " << std::endl;
	Wi->makeSound(); //will output the animal sound!
	Wmeta->makeSound();
	delete Wmeta;
	delete Wi;
    
    delete meta;
    delete j;
    delete i;

    return 0;
}