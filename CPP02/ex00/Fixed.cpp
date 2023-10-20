/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:10:56 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/20 17:26:05 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed()
{
	fixed_point_value = 0;
	std::cout << "Hello from default Constructor" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Hello from copy Constructor" << std::endl;
	*this = copy;
}

//desconstructor
Fixed::~Fixed()
{
	std::cout << "bye from Destructor" << std::endl;
}

//operator overloading
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "copy assignement operator called" << std::endl;
    if (this != &other) // Check for self-assignment
        fixed_point_value = other.getRawBits();
    return *this;
}


void Fixed::setRawbits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}