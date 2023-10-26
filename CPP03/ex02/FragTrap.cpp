/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:59:06 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/26 17:19:02 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	name = "Default";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap from ClapTrap " << name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap from ClapTrap " << name << " created with constructor." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "FragTrap from ClapTrap " << name << " created with copy constructor." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap from ClapTrap " << name << " has been destroyed by Destructor." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap from ClapTrap " << name << " ccalled copy assignement" << std::endl;
	ClapTrap::operator=(other);
	return(*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hit_points <= 0)
		std::cout << "a dead person cannot high any five." << std::endl;
	else
		std::cout << "FragTrap from ClapTrap " << name << " says: \"HIGH FIVE EVERYONE!\"." << std::endl;
}
