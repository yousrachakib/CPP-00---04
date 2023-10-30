/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:48:55 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:06:05 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria 
{
public:
    Cure();
    Cure(std::string const &type);
    Cure(const Cure& copy);
    ~Cure();

	Cure& operator=(const Cure& other);
    AMateria* clone() const ;
    void use(ICharacter& target);
};

#endif