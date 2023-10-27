/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:42:58 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/27 14:31:12 by yochakib         ###   ########.fr       */
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
	std::cout << "ClapTrap default constructor called " << std::endl;
}

ClapTrap::ClapTrap(const std::string& input_name)
{
	name = input_name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "done creating " << name << "from ClapTrap Constructor "<< std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy constructor called"  << std::endl;
	*this = copy;	
}

// destreactor
ClapTrap::~ClapTrap()
{
	std::cout << " ClapTrap Destructor cleared everything"  << std::endl;
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
	if (hit_points == 0 || energy_points == 0)
		return ;
	std::cout << "ClapTrap " << name << " attacks " << target << " and causes " << attack_damage << " hit points of damage." << std::endl;
	energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		std::cout << "ClapTrap " << name << " is repaired and gains " << amount << " hit points." << std::endl;
		hit_points += amount;
		energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " hit points of damage!" << std::endl;
		if (amount > hit_points)
			hit_points = 0;
		else
			hit_points -= amount;
	}
}

 