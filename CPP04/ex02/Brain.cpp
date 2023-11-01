/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:42:12 by yochakib          #+#    #+#             */
/*   Updated: 2023/11/01 13:27:57 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "AM A BRAIN";
    }
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = copy;
}

Brain::~Brain() 
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    for (int i = 0 ; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}