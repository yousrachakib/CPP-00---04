/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:11:51 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/10 14:35:33 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    int N = 5;
    
    std::string name = "Holdmember";
    
    Zombie* horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++) 
    {
        horde[i].announce();
    }

    delete [] horde;

    return 0;
}