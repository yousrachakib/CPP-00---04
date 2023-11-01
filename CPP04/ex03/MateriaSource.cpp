/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:26 by yochakib          #+#    #+#             */
/*   Updated: 2023/11/01 14:36:01 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
    for (int i = 0; i < 4; i++) 
	{
        source[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++) 
	{
		if (source[i])
        	this->source[i] = source[i]->clone();
		else
			source[i] = NULL;
    }
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{    
		for (int i = 0; i < 4; i++) 
		{
			if (this->source[i])
				delete this->source[i];
			if (source[i])
        		this->source[i] = source[i]->clone();
			else
				source[i] = NULL;
    	}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) 
	{
        delete source[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) 
{
    for (int i = 0; i < 4; i++) 
	{
        if (source[i] == NULL) 
		{
            source[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) 
{
    for (int i = 0; i < 4; i++) 
	{
        if (source[i] != NULL && source[i]->getType() == type) 
		{
            return source[i]->clone();
        }
    }
    return NULL;
}