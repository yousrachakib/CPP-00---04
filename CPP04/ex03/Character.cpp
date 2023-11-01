/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:21:47 by yochakib          #+#    #+#             */
/*   Updated: 2023/11/01 12:50:38 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "PPP.hpp"

Character::Character() : ICharacter()
{
	this->name = "";
    for (int i = 0; i < 4; i++) 
	{
        this->inventory[i] = NULL;
    }
}

Character::Character(const std::string& name) : ICharacter()
{
	this->name = name;
    for (int i = 0; i < 4; i++) 
	{
        this->inventory[i] = NULL;
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
        if (this->inventory[i] == NULL) 
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
        pop p;
        p.set_m(this->inventory[idx]);
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL) 
	{
        this->inventory[idx]->use(target);
    }
}