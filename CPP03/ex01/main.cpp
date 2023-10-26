/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:04:31 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/26 15:18:40 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() 
{
    // ClapTrap clapTrap("Clappy");
    // clapTrap.attack("Enemy");

    ScavTrap scavTrap("Scavvy");
    scavTrap.attack("Enemy");
    scavTrap.guardGate();

    return 0;
}