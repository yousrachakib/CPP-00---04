/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:12:04 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/04 12:15:57 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Constructor definition
Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
                 const std::string& phoneNumber, const std::string& darkestSecret)
    : firstName(firstName), lastName(lastName), nickname(nickname),
      phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}
