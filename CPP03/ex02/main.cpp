/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:04:31 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/26 15:28:48 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() 
{
    // ClapTrap clapTrap("Clappy");
    // clapTrap.attack("Enemy");

    // ScavTrap scavTrap("Scavvy");
    // scavTrap.attack("Enemy");
    // scavTrap.guardGate();

    FragTrap fragTrap("Fraggy");
    fragTrap.attack("Enemy");
    fragTrap.attack("Enemy1");
    fragTrap.attack("Enemy2");
    fragTrap.highFivesGuys();

	FragTrap fragT = fragTrap;

    // FragTrap fragTrapCopy(fragTrap); // Testing copy constructor
    // fragTrapCopy.attack("Another Enemy");
    // fragTrapCopy.highFivesGuys();

    // ClapTrap& clapTrapRef = fragTrapCopy; // Polymorphism
    // clapTrapRef.attack("Yet Another Enemy");

    return 0;
}