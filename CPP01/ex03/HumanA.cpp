/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:45:09 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 15:42:11 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :  _Weapon(weapon), name(name)
{
	
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << name << " Attacks with their " << _Weapon.getType() << std::endl;
}