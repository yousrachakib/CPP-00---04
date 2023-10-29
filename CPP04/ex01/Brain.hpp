/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:42:30 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/28 16:49:45 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain& copy);
        ~Brain();

        Brain& operator=(const Brain& other);
};




#endif