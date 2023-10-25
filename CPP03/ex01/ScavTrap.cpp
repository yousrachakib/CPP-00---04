/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:29:05 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/25 19:00:28 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "Default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap from ClapTrap " << name << " created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap from ClapTrap " << name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Scavtrap's Copy Constructor called !"<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap from ClapTrap " << name << " destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(other);
	return(*this);
}

void ScavTrap::guardGate(void)
{
	if (hit_points <= 0)
		std::cout << "a dead person cannot be a gate-keeper." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << name << " is a \"Guard Gate\" now." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if ( hit_points >= 1 ||energy_points >= 1)
	{
		std::cout << "ScavTrap from ClapTrap" << name << " attacks " << target << " and causes " << attack_damage << " hit points of damage." << std::endl;
		energy_points--;
	}
	else
		std::cout << "ScavTrap from ClapTrap" << name << " has insufficient energy points to attack." << std::endl;
}