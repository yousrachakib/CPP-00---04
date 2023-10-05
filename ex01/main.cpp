/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:43:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/05 17:01:43 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Phonebook ptr;
	std::string input;

	while (input != "EXIT")
	{
		std::cout << "Enter a Request >";
		std::getline(std::cin, input);
		// :cout << "Try again , we only allow (ADD | SEARCH | EXIT)" << std::endl;
		if (input == "ADD")
			// std::cout << "ADDFUNCTION" << std::endl;
			ptr._add();
		else if (input == "SEARCH")
			// std::cout << "SEARCHFUNCTION" << std::endl;
			ptr._search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return 0;
		}
	}
	return 0;
}
