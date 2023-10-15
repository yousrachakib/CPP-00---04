/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:04:24 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 18:12:39 by yochakib         ###   ########.fr       */
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
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int Index = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            Index = i;
            break;
        }
    }

    switch (Index)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            std::cout << "This is a debug message." << std::endl;
            break;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            std::cout << "This is an informational message." << std::endl;
            break;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            std::cout << "This is a warning message." << std::endl;
            std::cout << "Please pay attention!" << std::endl;
            break;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            std::cout << "An error occurred." << std::endl;
            std::cout << "Please fix it immediately!" << std::endl;
            break;
        default:
            std::cout << "Invalid log level." << std::endl;
            break;
    }
}