/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:43:07 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/10 12:37:13 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        horde[i].setname(name);
    }
    return horde;
}