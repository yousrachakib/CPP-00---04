/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:03:34 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/31 21:22:42 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal class called thr default constructor. "<< std::endl;
    this->type = "Default";
}

Animal::Animal(const std::string& type)
{
    this->type = type;
    std::cout << "Animal class called the constructor, and created a : [ " << type << " ]." << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal class called the copy constructor, and created a copy of [ " << get_type()  << " ]"<< std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal class called Destructor. " << std::endl;
}

//copy assignement =

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal class called copy assignement operator. " << std::endl;
    if( this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}



//getter and setter:
const std::string& Animal::get_type() const
{
    return (type);
}

void Animal::set_type(const std::string& type)
{
    this->type = type;
}

//Methods

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}