/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:06:41 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/22 17:16:23 by yochakib         ###   ########.fr       */
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