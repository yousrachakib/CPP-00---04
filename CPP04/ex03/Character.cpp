/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:21:47 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:34:49 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : ICharacter()
{
	this->name = "";
    for (int i = 0; i < 4; i++) 
	{
        this->inventory[i] = nullptr;
    }
}

Character::Character(const std::string& name) : ICharacter()
{
	this->name = name;
    for (int i = 0; i < 4; i++) 
	{
        this->inventory[i] = nullptr;
    }
}
Character::Character(const Character& copy) : ICharacter()
{
	this->name = copy.name;
	for (int i = 0; i < 4; i++) 
	{
        this->inventory[i] = copy.inventory[i]->clone();
    }
}
Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++) 
		{
			if (this->inventory[i])
				delete this->inventory[i];
        	this->inventory[i] = other.inventory[i]->clone();
    	}
	}
	return (*this);
}

Character::~Character() 
{
    for (int i = 0; i < 4; i++) 
	{
        delete inventory[i];
    }
}

std::string const& Character::getName() const 
{
    return (name);
}

void Character::equip(AMateria* m) 
{
    for (int i = 0; i < 4; i++) 
	{
        if (this->inventory[i] == nullptr) 
		{
            this->inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4) 
	{
        this->inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && this->inventory[idx] != nullptr) 
	{
        this->inventory[idx]->use(target);
    }
}