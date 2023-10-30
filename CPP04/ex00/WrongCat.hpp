/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:43:18 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/30 15:46:36 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal 
{
	private:
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat	&operator=(const WrongCat &other);
		~WrongCat();
		void	makeSound() const;
};

#endif