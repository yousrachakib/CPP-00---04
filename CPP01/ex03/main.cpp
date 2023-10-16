/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:14:19 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 15:48:09 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	//create a Weapon for HumanA
	Weapon club=     Weapon("AKM");
	//Creating HamanA instance
	HumanA human_a("John", club);
	human_a.attack();
	club.setType("M7");
	human_a.attack();

	//create a Weapon for HumanB

	Weapon club1 = Weapon("M16");
	
	HumanB human_b("Jane");
	human_b.setWeapon(club1);
	human_b.attack();
	club1.setType("SCARL");
	human_b.attack();
	return (0);
}

// int main()
// {
// {
// Weapon club = Weapon("crude spiked club");
// HumanA bob("Bob", club);
// bob.attack();
// club.setType("some other type of club");
// bob.attack();
// }

// {
// Weapon club = Weapon("crude spiked club");
// HumanB jim("Jim");
// jim.setWeapon(club);
// jim.attack();
// club.setType("some other type of club");
// jim.attack();
// }
// }
