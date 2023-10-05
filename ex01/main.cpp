/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:43:23 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/05 18:40:59 by yochakib         ###   ########.fr       */
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
		if (input == "ADD")
			ptr._add();
		else if (input == "SEARCH")
			ptr._search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return 0;
		}
	}
	return 0;
}
