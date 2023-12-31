/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:38:36 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 15:42:16 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanA
{
	private:
		Weapon &_Weapon;
		std::string name;
	public:
		HumanA(std::string name,Weapon& _weapon);
		~HumanA();
		void	attack();
};

#endif