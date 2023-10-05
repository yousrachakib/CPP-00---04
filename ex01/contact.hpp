/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:42:26 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/05 12:37:25 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    // Constructor
    Contact(void);
	~Contact(void);

    // Getter methods
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
	
	//setter methods
	void	set_FirstName(std::string	buffer);
	void	set_LastName(std::string	buffer);
	void	set_Nickname(std::string	buffer);
	void	set_PhoneNumber(std::string	buffer);
	void	set_DarkestSecret(std::string	buffer);
};

#endif
