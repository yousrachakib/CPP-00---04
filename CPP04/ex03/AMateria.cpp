/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:46:21 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:05:27 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
// #include "ICharacter.hpp"  // Include ICharacter header file if it's not already included

AMateria::AMateria()
{
	type = "";
	std::cout << "abstruct class AMateria called its Default Constructor" << std::endl;
}

AMateria::AMateria(const std::string& type) : type(type) 
{
	std::cout << "abstruct class AMateria called its Constructor" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

AMateria::~AMateria() 
{
	std::cout << "abstruct class AMateria called its destructor" << std::endl;
}

std::string const& AMateria::getType() const 
{
    return (type);
}

void AMateria::use(ICharacter& target) 
{
    // Default implementation does nothing
	(void)target;
}