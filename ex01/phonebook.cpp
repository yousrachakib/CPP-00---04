/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:22:14 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/05 23:39:54 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	index = 0;
	
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "Welcome to My phonebook! an empty phonebook has been created successfully ^^ " << std::endl ;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
}
Phonebook::~Phonebook(void)
{
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "Thanks for using My Phonebook, everything was cleared from history ." << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
}
void	Phonebook::_add(void)
{
	std::string buffer;
	
	buffer.clear();
	std::cout << "====>>>"<< index << std::endl;
	if (index > 7)
		std::cout << "Warning!! maximum size has been reached, FORCE REPLACE" << std::endl;
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter Firstname =>";
		if (std::getline(std::cin, buffer) && !buffer.empty())
			_contacts[index % 8].set_FirstName(buffer);
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index % 8].getFirstName() << "'s Lastname =>";
		if (std::getline(std::cin, buffer) && !buffer.empty())
			_contacts[index % 8].set_LastName(buffer);
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index % 8].getFirstName() << "'s Nickname =>";
		if (std::getline(std::cin, buffer) && !buffer.empty())
			_contacts[index % 8].set_Nickname(buffer);
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index % 8].getFirstName() << "'s Phonenumber =>";
		if (std::getline(std::cin, buffer) && !buffer.empty())
			_contacts[index % 8].set_PhoneNumber(buffer);
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index % 8].getFirstName() << "'s Darkest sercret =>";
		if (std::getline(std::cin, buffer) && !buffer.empty())
		{
			_contacts[index % 8].set_DarkestSecret(buffer);
			std::cout << "Congrats your contact has been added successfully!!" << std::endl;
		}
	}
	index++;
}

void Phonebook::_myputs(Contact contact)
{
	if (!contact.getFirstName().size())
	{
		std::cout << " ------------------------------------------- " << std::endl;
		std::cout << ":( Failed to get info for this contact :( " << std::endl;
		std::cout << " ------------------------------------------- " << std::endl;
		return ;
	}
	std::cout << "**************************************" << std::endl;
	std::cout << "Firstname: " << contact.getFirstName() << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << "Lastname: " << contact.getLastName() << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << "Phonenumber: " << contact.getPhoneNumber() << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << "**************************************" << std::endl;
}

Contact	Phonebook::get_contact(int i)
{
	return (_contacts[i % 8]);
}

void	Phonebook::_search(void)
{
	std::string buffer;
	
	while (!std::cin.eof())
	{
		// Prompt the user to select a contact (index)
		std::cout << "Select a contact(index) :";
		
		// Read a line of input from the user into the 'buffer' string
		if (std::getline(std::cin, buffer) && !buffer.empty())
		{
			// Check if the buffer contains a single character and that character is between '1' and '8'
			if (buffer.size() == 1 && (buffer[0] >= '1' && buffer[0] <= '8'))
			 	break;
		}
		// Check if the buffer is not empty and display an error message
		if (!buffer.empty())
			std::cout << "Invalid Index" << std::endl;
	}
	// Check if the end of input was not reached
	if (!std::cin.eof())
		_myputs(_contacts[buffer[0] - 1 - '0']);
}
