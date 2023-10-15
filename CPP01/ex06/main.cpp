/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:06:41 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/15 18:13:47 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
    {
        std::cerr << "Usage: " << av[0] << " <log_level>" << std::endl;
        return 1;
    }

    std::string logLevel = av[1];
    Harl harl;

    harl.complain(logLevel);

    return 0;
}