/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:40:02 by yochakib          #+#    #+#             */
/*   Updated: 2023/11/01 11:59:55 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	attribut_cat = new Brain();
    std::cout << "Cat class called Default constructor to create [" << get_Catname() << " ]"<< std::endl;
}

Cat::Cat(std::string& name) : Animal(name)
{
    std::cout << "Cat class called the constructor to create [" << get_Catname() << " ]"<< std::endl;
    attribut_cat = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat class called the copy constructor to create [" << get_Catname() << " ]"<< std::endl;
	this->type = copy.type;
	attribut_cat = new Brain(*this->attribut_cat);
}

Cat::~Cat()
{
    std::cout << "Cat class called the destructor " << std::endl;
    delete attribut_cat;
}

//copy assignement :

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat class called copy assignement operator" << std::endl;
    Animal::operator=(other);
    if (this != &other)
    {
        delete attribut_cat;
        attribut_cat = new Brain(*other.attribut_cat);
    }
    return (*this);
}

//getter & setter:

std::string& Cat::get_Catname()
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}