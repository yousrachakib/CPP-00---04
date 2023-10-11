/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:45:09 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/11 20:17:50 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon& weapon) :  _Weapon(weapon), name(name)
{
    // Constructor implementation
}

HumanA::~HumanA()
{
	
}

void HumanA::attack() const
{
	std::cout << name << " Attacks with their " << _Weapon.getType() << std::endl;
}