/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:22:14 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/06 20:16:00 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::setindex(int n)
{
	index = n;
}

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

int isWhitespace(std::string& input)
{
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (!std::isspace(input[i]))
            return 0;
    }

    return 1;
}
int isAlldigit(std::string& input)
{
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (!std::isdigit(input[i]))
            return 0;
    }
    return 1;
}


int	Phonebook::_add(void)
{
	std::string buffer;
	
	buffer.clear();
	if (index > 7)
	{
		setindex(0);
		std::cout << "-------------------------------------------------------- " << std::endl;
		std::cout << "Warning!! maximum size has been reached, |FORCE REPLACE|" << std::endl;
		std::cout << "-------------------------------------------------------- " << std::endl;
	}
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter Firstname =>";
		if (std::getline(std::cin, buffer) && !buffer.empty() && isWhitespace(buffer) != 1)
			_contacts[index].set_FirstName(buffer);
		else
		{
			std::cout << "INVALID INPUT, TRY ALL OVER AGAIN !" << std::endl; 
			return (1);	
		}	
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index].getFirstName() << "'s Lastname =>";
		if (std::getline(std::cin, buffer) && !buffer.empty() && isWhitespace(buffer) != 1)
			_contacts[index].set_LastName(buffer);
		else
		{
			std::cout << "INVALID INPUT, TRY ALL OVER AGAIN !" << std::endl; 
			return (1);	
		}
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index].getFirstName() << "'s Nickname =>";
		if (std::getline(std::cin, buffer) && !buffer.empty() && isWhitespace(buffer) != 1)
			_contacts[index].set_Nickname(buffer);
		else
		{
			std::cout << "INVALID INPUT, TRY ALL OVER AGAIN !" << std::endl; 
			return (1);	
		}
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index].getFirstName() << "'s Phonenumber =>";
		if (std::getline(std::cin, buffer) && !buffer.empty() && isWhitespace(buffer) != 1 && isAlldigit(buffer))
			_contacts[index].set_PhoneNumber(buffer);
		else
		{
			std::cout << "INVALID INPUT, TRY ALL OVER AGAIN !" << std::endl; 
			return (1);	
		}
	}
	buffer.clear();
	while (!std::cin.eof() && buffer.empty())
	{
		std::cout << "Enter " << _contacts[index].getFirstName() << "'s Darkest sercret =>";
		if (std::getline(std::cin, buffer) && !buffer.empty()&& isWhitespace(buffer) != 1)
		{
			_contacts[index].set_DarkestSecret(buffer);
			std::cout << "Congrats your contact has been added successfully!!" << std::endl;
		}
		else
		{
			std::cout << "INVALID INPUT, TRY ALL OVER AGAIN !" << std::endl; 
			return (1);	
		}
	}
	index++;
	return (0);
}

void Phonebook::_myputs(Contact contact)
{
	if (contact.getFirstName().empty())
	{
		std::cout << " ------------------------------------------- " << std::endl;
		std::cout << "  :( Failed to get info for this contact :( " << std::endl;
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

std::string fixWidth(const std::string& str, size_t maxWidth)
{
    if (str.size() > maxWidth)
    {
        std::string fixedStr = str.substr(0, maxWidth - 1);
        fixedStr[fixedStr.size() - 1] = '.';
        return fixedStr;
    }
    else
        return str;
}
int displayContent(const Contact contacts[8])
{
    int count = 0;
    
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    
    for (int i = 0; i < 8; ++i)
    {
        const Contact& contact = contacts[i];
        
        if (!contact.getFirstName().empty())
        {
            std::cout << "|" << std::setw(10) << fixWidth(std::to_string(i + 1), 10);
            std::cout << "|" << std::setw(10) << fixWidth(contact.getFirstName(), 10);
            std::cout << "|" << std::setw(10) << fixWidth(contact.getLastName(), 10);
            std::cout << "|" << std::setw(10) << fixWidth(contact.getNickname(), 10);
            std::cout << "|" << std::setw(10) << std::endl;
    		std::cout << " ------------------------------------------- " << std::endl;
            count++;
        }
    }
    return count;
}

void	Phonebook::_search(void)
{
	std::string buffer;
	displayContent(_contacts);
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
			std::cout << "Invalid Index !" << std::endl;
	}
	// Check if the end of input was not reached
	if (!std::cin.eof())
		_myputs(_contacts[buffer[0] - 1 - '0']);
}
