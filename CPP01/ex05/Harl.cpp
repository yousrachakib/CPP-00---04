/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:29:21 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 14:57:24 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Debug: This is just a minor annoyance." << std::endl;
}

void Harl::info(void)
{
	std::cout <<  "Info: Just so you know, something happened." << std::endl;
}

void Harl::warning(void)
{
	std::cout <<  "Warning: This could be a problem, but I won't lose sleep over it." << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: This is a serious issue! Panic mode activated." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complainFunction)();
		if (level == "DEBUG")
			complainFunction = &Harl::debug;
		else if (level == "INFO")
			complainFunction = &Harl::info;
		else if (level == "WARNING")
			complainFunction = &Harl::warning;
		else if (level == "ERROR")
			complainFunction = &Harl::error;
		else
		{
			std::cout << "Unknown complaint level !!" << std::endl;
			return ;
		}
		(this->*complainFunction)();
}