/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:12:04 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/05 11:34:44 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Constructor definition
Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

// Getter method definitions
std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const 
{
	return lastName;
}

std::string Contact::getNickname() const
{
	return nickname;
}

std::string Contact::getPhoneNumber() const 
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const 
{
	return darkestSecret;
}

// Setter methods definition

void	Contact::set_FirstName(std::string buffer)
{
	firstName = buffer;
}

void	Contact::set_LastName(std::string buffer)
{
	lastName = buffer;
}

void	Contact::set_Nickname(std::string buffer)
{
	nickname = buffer;
}

void	Contact::set_PhoneNumber(std::string buffer)
{
	phoneNumber = buffer;
}

void	Contact::set_DarkestSecret(std::string buffer)
{
	darkestSecret = buffer;
}

