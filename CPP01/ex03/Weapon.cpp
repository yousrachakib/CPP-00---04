/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:35:17 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/10 18:38:16 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(const std::string& newType)
{
    type = newType;
}


std::string& Weapon::getType(void)
{
    return (type);
}
