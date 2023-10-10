/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:48:30 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:15 by yochakib         ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        
        void announce (void);
        void setname(std::string name);
   
};

Zombie* zombieHorde( int N, std::string name );
#endif