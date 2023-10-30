/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:42:14 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 15:44:37 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) 
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) 
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const 
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const 
{
	return (this->type);
}