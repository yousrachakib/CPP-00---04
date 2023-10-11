/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:55:26 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/11 20:21:41 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP


#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* _weapon;
	public:
		HumanB(const std::string& name);
		void setWeapon(Weapon& weapon);
		void attack() const;
};

#endif