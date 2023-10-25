/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:04:31 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/24 19:12:31 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("CL4P-TP");

    // Initial status
    clapTrap.attack("Enemy"); // No energy points
    clapTrap.takeDamage(5);  // Hit points: 5
    clapTrap.beRepaired(3);  // Hit points: 8

    // Normal attack
    clapTrap.attack("Enemy"); // Energy points: 9
    clapTrap.takeDamage(2);  // Hit points: 6

    // Attack when hit points are zero
    clapTrap.takeDamage(6);  // Hit points: 0
    clapTrap.attack("Enemy"); // Cannot attack, destroyed

    // Attack when energy points are zero
    clapTrap.beRepaired(5);  // Cannot repair, destroyed
    clapTrap.attack("Enemy"); // Cannot attack, destroyed

    // Repair when destroyed
    clapTrap.beRepaired(3);  // Cannot repair, destroyed

    // Recreation and further actions
    ClapTrap newClapTrap("FR4G-TP");
    newClapTrap.attack("Enemy"); // Energy points: 9
    newClapTrap.takeDamage(7);  // Hit points: 3
    newClapTrap.beRepaired(5);  // Hit points: 8

    // Negative damage
    newClapTrap.takeDamage(-2);  // Hit points: 8

    // Overflow damage
    newClapTrap.takeDamage(999999999);  // Hit points: 0, destroyed

    // Overflow repair
    newClapTrap.beRepaired(999999999);  // Cannot repair, destroyed

    return 0;
}