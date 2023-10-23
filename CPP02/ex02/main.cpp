/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:15:33 by yochakib          #+#    #+#             */
/*   Updated: 2023/10/22 21:49:05 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main() 
// {
//     Fixed a(5);
//     Fixed b(10);

//     Fixed c = a < b;
// 	Fixed d = a * b;
// 	Fixed e = a / b;
// 	Fixed f = a - b;
	
//     std::cout << "a: " << a.toFloat() << std::endl;
//     std::cout << "b: " << b.toFloat() << std::endl;
//     std::cout << Fixed::max(a, b) << std::endl;
//     std::cout << Fixed::min(a, b) << std::endl;

//     return 0;
// }

int main( void ) 
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}