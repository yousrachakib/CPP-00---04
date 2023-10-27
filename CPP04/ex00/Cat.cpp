/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:40:02 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/27 18:53:04 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat class called Default constructor to create [" << get_Catname() << " ]"<< std::endl;
}

Cat::Cat(std::string& name) : Animal(name)
{
    std::cout << "Cat class called the constructor to create [" << get_Catname() << " ]"<< std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat class called the copy constructor to create [" << get_Catname() << " ]"<< std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat class called the destructor " << std::endl;
}

//copy assignement :

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat class called copy assignement operator" << std::endl;
    Animal::operator=(other);
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