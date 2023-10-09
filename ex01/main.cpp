/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:43:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/08 22:35:36 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Phonebook ptr;
	std::string input;

	while (true)
	{
		std::cout << "Enter a Request >";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return 0;
		}
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			while (ptr._add() == 1)
				ptr._add();
		}
		else if (input == "SEARCH")
		{
			ptr._search();
		}	
	}
	return 0;
}
