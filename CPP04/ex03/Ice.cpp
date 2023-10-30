/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:41 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:16:31 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria() 
{
	this->type = "ice";
	std::cout << "Ice from AMateria called its Default Constructor" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type) 
{
	this->type = type;
	std::cout << "Ice from AMateria called its Constructor" << std::endl;
}

Ice::Ice(const Ice& copy)
{
	*this = copy;
	std::cout << "Ice from AMateria called its copy Constructor" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Ice from AMateria called its copy assignement" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Ice::~Ice() 
{
	std::cout << "Ice from AMateria called her destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	Ice *clone = new Ice(this->type);
    return (clone);
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}