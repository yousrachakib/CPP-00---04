/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:44:54 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 15:50:57 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) 
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) 
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const 
{
	std::cout << "WrongCat meows" << std::endl;
}