/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:06:29 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/23 14:00:37 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nu_fractionnal_bits = 8;
// default constructor
Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	fixed_point_value = 0;
}

// Int Constructor
Fixed::Fixed(const int value)
{
	std::cout << "Int Constructor called" << std::endl;
	fixed_point_value = value << nu_fractionnal_bits;
}

// Float Constructor
Fixed::Fixed(const float value)
{
	std::cout << "float Constructor called" << std::endl;
	fixed_point_value = roundf(value * (1 << nu_fractionnal_bits));
}

// Copy constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "copy Constructor called" << std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed& other)
{
	std::cout << "copy assignement called" << std::endl;
	if (this != &other)
	{
		this->fixed_point_value = other.fixed_point_value;
	}
	return (*this);
}

// comparison ovearloading operator

int Fixed::operator>(const Fixed& other) const 
{
    return (fixed_point_value > other.fixed_point_value);
}

int Fixed::operator<(const Fixed& other) const 
{
    return (fixed_point_value < other.fixed_point_value);
}

int Fixed::operator>=(const Fixed& other) const 
{
    return (fixed_point_value >= other.fixed_point_value);
}

int Fixed::operator<=(const Fixed& other) const 
{
    return (fixed_point_value <= other.fixed_point_value);
}

int Fixed::operator==(const Fixed& other) const 
{
    return (fixed_point_value == other.fixed_point_value);
}

int Fixed::operator!=(const Fixed& other) const 
{
    return (fixed_point_value != other.fixed_point_value);
}

// Arethmic operator

float Fixed::operator+(const Fixed& other)
{
	return (toFloat() + other.toFloat());
}

float Fixed::operator*(const Fixed& other)
{
	return (toFloat() * other.toFloat());
}

float Fixed::operator-(const Fixed& other)
{
	return (toFloat() - other.toFloat());
}


float Fixed::operator/(const Fixed& other)
{
	return (toFloat() / other.toFloat());
}

// increment/ decrement operator

Fixed	Fixed::operator++()
{
	this->fixed_point_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->fixed_point_value--;
	return (*this);
}

//Methods :

Fixed& Fixed::min(Fixed& first,Fixed& second)
{
	if (first.toFloat() >= second.toFloat())
		return (second);
	else
		return (first);
}
Fixed& Fixed::max(Fixed& first,Fixed& second)
{
	if (first.toFloat() <= second.toFloat())
		return (second);
	else
		return (first);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->fixed_point_value;
	return(tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->fixed_point_value;
	return(tmp);
}


// Assignement operator <<

std::ostream &operator<<(std::ostream& os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}


int Fixed::toInt(void) const
{
	return (fixed_point_value >> nu_fractionnal_bits);
}


float	Fixed::toFloat(void) const
{
	float result = (((float)fixed_point_value) / (1 << nu_fractionnal_bits));
	return (result);
}

// setter

void Fixed::setRawbits(int const raw)
{
	fixed_point_value = raw;
}

// getters

int Fixed::getRawBits() const
{
	return (fixed_point_value);
}



