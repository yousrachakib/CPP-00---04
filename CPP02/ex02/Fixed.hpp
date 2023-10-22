/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:52:58 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/22 20:17:09 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>


class Fixed
{
private:
	int 				fixed_point_value;
	static const int	nu_fractionnal_bits;
public:
	// Constructor
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);

	// Destructor
	~Fixed();

	// Operation overloading
    Fixed& operator=(const Fixed& other);
    int operator>(const Fixed& other) const;
    int operator<(const Fixed& other) const;
    int operator>=(const Fixed& other) const;
    int operator<=(const Fixed& other) const;
    int operator==(const Fixed& other) const;
    int operator!=(const Fixed& other) const;

	// Arethmics operator
	float operator+(const Fixed& other);
	float operator*(const Fixed& other);
	float operator-(const Fixed& other);
	float operator/(const Fixed& other);
	
	//increment /decriment operators

	Fixed&	operator++();
	Fixed&	operator--();
	Fixed&	operator++(int);
	Fixed&	operator--(int);

	//Method
	int		toInt(void) const;
	float	toFloat(void) const;

	// getter
	int getRawBits() const;

	// setter
	void setRawbits(int const raw);
};

std::ostream& operator<<(std::ostream& os,Fixed const &obj);


#endif