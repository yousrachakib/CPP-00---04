/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:38:50 by yochakib          #+#    #+#             */
/*   Updated: 2023/11/01 14:27:54 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
private:
    AMateria* source[4];
public:
    MateriaSource();
	MateriaSource(const MateriaSource &copy);
    ~MateriaSource();

	MateriaSource	&operator=(const MateriaSource &other);
    void learnMateria(AMateria* m);
    AMateria* createMateria(const std::string& type);
};

#endif