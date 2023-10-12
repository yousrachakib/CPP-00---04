/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:21:24 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/12 15:57:37 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
		Weapon(const std::string& type);
		~Weapon();
        const std::string& getType(void) const; 
        void setType(const std::string& newType);
};



#endif