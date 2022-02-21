/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:07 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 13:01:49 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int     main( void )
{
	Fixed   a;
	Fixed   b;
	Fixed   c;

	a.setRawBits( 42 );
	b.setRawBits( 420 );
	c = b;
	Fixed	d( a );

	std::cout << "a = " << a.getRawBits() << std::endl;
	std::cout << "b = " << b.getRawBits() << std::endl;
	std::cout << "c = " << c.getRawBits() << std::endl;
	std::cout << "d = " << d.getRawBits() << std::endl;

	return ( EXIT_SUCCESS );
}

// int main( void ) {
	
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
	
// 	c = b;
	
// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
	
// 	return 0;
// }
