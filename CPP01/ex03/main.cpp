/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:14:19 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/11 20:48:02 by yochakib         ###   ########.fr       */
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