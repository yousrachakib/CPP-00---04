/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:40:02 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/28 21:25:13 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog class called Default constructor to create [" << get_dogname() << " ]"<< std::endl;
}

Dog::Dog(std::string& name) : Animal(name)
{
    attribute_dog = new Brain();
    std::cout << "Dog class called the constructor to create [" << get_dogname() << " ]"<< std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog class called the copy constructor to create [" << get_dogname() << " ]"<< std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog class called the destructor " << std::endl;
    delete attribute_dog;
}

//copy assignement :

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog class called copy assignement operator" << std::endl;
    Animal::operator=(other);
    if (this != &other)
    {
        delete attribute_dog;
        attribute_dog =  new Brain(*other.attribute_dog);
    }
    return (*this);
}
//Methods

void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}

//getter & setter:

std::string& Dog::get_dogname()
{
    return (this->type);
}