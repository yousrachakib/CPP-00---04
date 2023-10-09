/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:30:15 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/09 18:24:51 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std in std output operation
#include <string> // string manipulation

int main(int ac, char **av)
{
	std::string res;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; av[i]; i++)
		{
			res= av[i];
			for (int j = 0; res[j]; j++)
				std::cout << (char)std::toupper(res[j]);
				
		}
	}
	std::cout << std::endl;
	return (0);
}
