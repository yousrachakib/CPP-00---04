/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:48:30 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/10 11:06:26 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce (void);
   
};

Zombie* newZombie(std::string name);
void randomChump(std::string name) ;

#endif