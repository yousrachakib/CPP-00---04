/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:08:42 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 17:10:19 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
// #include "ICharacter.hpp"

class Ice : public AMateria 
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(Ice const &copy);
		Ice	&operator=(Ice const &other);
		~Ice();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif