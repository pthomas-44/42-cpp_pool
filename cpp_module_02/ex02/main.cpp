/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:07 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/18 17:58:56 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	{
		Fixed a(420);
		Fixed b(69.42f);

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl << std::endl;

		if ( a < b )
			std::cout << "a < b = true" << std::endl;
		else
			std::cout << "a < b = false" << std::endl;
		if ( a > b )
			std::cout << "a > b = true" << std::endl;
		else
			std::cout << "a > b = false" << std::endl;
		if ( a <= b )
			std::cout << "a <= b = true" << std::endl;
		else
			std::cout << "a <= b = false" << std::endl;
		if ( a >= b )
			std::cout << "a >= b = true" << std::endl;
		else
			std::cout << "a >= b = false" << std::endl;
		std::cout << "a = b" << std::endl;
		a = b;
		if ( a == b )
			std::cout << "a == b = true" << std::endl;
		else
			std::cout << " a == b = false" << std::endl;
		if ( a <= b )
			std::cout << "a <= b = true" << std::endl;
		else
			std::cout << "a <= b = false" << std::endl;
		if ( a >= b )
			std::cout << "a >= b = true" << std::endl << std::endl;
		else
			std::cout << "a >= b = false" << std::endl << std::endl;

		std::cout << "a++ = " << a++ << " -> " << a << std::endl;
		std::cout << "++a = " << ++a << " -> " << a << std::endl;
		std::cout << "b-- = " << b-- << " -> " << b << std::endl;
		std::cout << "--b = " << --b << " -> " << b << std::endl << std::endl;

		a = 42;
		b = 69;
		Fixed c(42);

		std::cout << "a = " << a << " | b = " << b << " | c = " << c << std::endl;
		std::cout << "min( a, b) = " << Fixed::min( a, b ) << std::endl;
		std::cout << "max( a, b) = " << Fixed::max( a, b ) << std::endl;
		std::cout << "min( a, c) = " << Fixed::max( a, c ) << std::endl;
		std::cout << "max( a, c) = " << Fixed::max( a, c ) << std::endl;
	}
	// {
	// 	Fixed a;
	// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
	// 	std::cout << a << std::endl;
	// 	std::cout << ++a << std::endl;
	// 	std::cout << a << std::endl;
	// 	std::cout << a++ << std::endl;
	// 	std::cout << a << std::endl;
	// 	std::cout << b << std::endl;
	// 	std::cout << Fixed::max( a, b ) << std::endl;
	// }
	return ( EXIT_SUCCESS );
}