/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:58:48 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/11 20:22:25 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name){}


void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const 
{
	if (_weapon != nullptr)
		std::cout << name << " attacks with their " << _weapon->getType() << std::endl;

	else
		std::cout << name << "is unarmed and can only bite" << std::endl;
}

