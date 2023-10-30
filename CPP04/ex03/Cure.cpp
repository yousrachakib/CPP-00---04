/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:50:22 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:16:27 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria() 
{
	this->type = "cure";
	std::cout << "Cure from AMateria called its Default Constructor" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type) 
{
	this->type = type;
	std::cout << "Cure from AMateria called its Constructor" << std::endl;
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
	std::cout << "Cure from AMateria called its copy Constructor" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "Cure from AMateria called its copy assignement" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Cure::~Cure() 
{
	std::cout << "Cure from AMateria called her destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure *clone = new Cure(this->type);
    return (clone);
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}