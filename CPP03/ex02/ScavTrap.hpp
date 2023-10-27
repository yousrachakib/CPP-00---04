/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:09:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/27 21:06:59 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& input_name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

	//copy assignement operator
	ScavTrap& operator=(const ScavTrap& other);
	
	// Main member function 
	void guardGate(void);
	void attack(const std::string& target);
	//
};

#endif