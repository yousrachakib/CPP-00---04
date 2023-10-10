/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:12:27 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/10 10:13:05 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    Zombie zombie1("Alice");
    zombie1.announce();

    Zombie* zombie2 = newZombie("Bob");
    zombie2->announce();
    delete zombie2;

    randomChump("Charlie");

    return 0;
}