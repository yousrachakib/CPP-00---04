/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:29:21 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 17:16:51 by yochakib         ###   ########.fr       */
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
	void (Harl::*complainFunction[4])();

	int i = 0;
	(complainFunction)[0] = &Harl::debug;
	(complainFunction)[1] = &Harl::info;
	(complainFunction)[2] = &Harl::warning;
	(complainFunction)[3] = &Harl::error;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*complainFunction[i])();
	else
	{
		std::cout << i ;
		std::cout << "Level not found" << std::endl;
	}

}