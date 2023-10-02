/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:30:15 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/01 02:33:19 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std in std output operation
#include <string> // string manipulation

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
				
		}
	}
	std::cout << std::endl;
	return (0);
}