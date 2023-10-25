/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:42:58 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/24 19:08:37 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructor 
ClapTrap::ClapTrap()
{
	name = "Default";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Default constructor called " << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "done creating " << name << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called"  << std::endl;
	*this = copy;	
}

// destreactor
ClapTrap::~ClapTrap()
{
	std::cout << " Destructor cleared everything"  << std::endl;
}

// copy assignement
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return (*this);
}

// Methods:
void ClapTrap::attack(const std::string& target)
{
	if ( hit_points >= 1 ||energy_points >= 1)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " and causes " << attack_damage << " hit points of damage." << std::endl;
		energy_points--;
	}
	else
		std::cout << "ClapTrap " << name << " has insufficient energy points to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "ClapTrap " << name << " is already destroyed and cannot take any more damage." << std::endl;
        return;
	}
	hit_points -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " hit points of damage!" << std::endl;
	if (hit_points <= 0)
	{
		hit_points = 0;
		std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0) 
	{
        std::cout << "ClapTrap " << name << " is destroyed and cannot be repaired." << std::endl;
        return;
    }
	hit_points += amount;
	std::cout << "ClapTrap " << name << " is repaired and gains " << amount << " hit points." << std::endl;
}
 