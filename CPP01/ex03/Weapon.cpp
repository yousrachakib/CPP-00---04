/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:35:17 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 15:42:30 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(const std::string& type) : type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}


const std::string& Weapon::getType(void)
{
    return (type);
}
