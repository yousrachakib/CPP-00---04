/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:36:05 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:36:38 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include <iostream>

class AMateria;  // Forward declaration of AMateria

class IMateriaSource 
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria* m) = 0;
    virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif