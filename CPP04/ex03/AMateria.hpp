/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:45:16 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:03:27 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;  // Forward declaration of ICharacter

class AMateria 
{
protected:
    std::string type;

public:
 	AMateria();
    AMateria(const std::string& type);
    AMateria(const AMateria& copy);
    virtual ~AMateria();

	AMateria& operator=(const AMateria& other);
    std::string const& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif