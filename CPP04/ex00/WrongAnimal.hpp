/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:41:49 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 15:44:06 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal 
{
	protected:
		std::string	type;
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal	&operator=(const WrongAnimal &other);
	virtual	~WrongAnimal();
	void	makeSound() const;
	std::string	getType(void) const;
};

#endif