/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:06:41 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/20 12:35:00 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>


class Fixed
{
private:
	int 				fixed_point_value;
	static const int	nu_fractionnal_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();

    Fixed& operator=(const Fixed& other);
	int getRawBits() const;
	void setRawbits(int const raw);
};


#endif