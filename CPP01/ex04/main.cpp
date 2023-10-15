/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:14:41 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 00:53:11 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileName.hpp"

int main(int ac, char **av)
{
	if (ac != 4 )
	{
		std::cout << "Usage: ./sed [filename] [to_replace] [new]" << std::endl;
		return (1);
	}
	
	fileName file(av[1], av[2], av[3]);
	file.parseAndReplace();
}
