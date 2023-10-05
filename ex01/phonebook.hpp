/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:37:18 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/05 17:07:49 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "contact.hpp"
#include <cctype>

class Phonebook
{
	private:
		Contact _contacts[8];
		int	index;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	_add(void);
		void	_search(void);
		void	_myputs(Contact contact);
		//getter
		Contact get_contact(int i);
};


#endif
