/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:07 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 13:04:30 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( int ac, char **av )
{
	if ( ac != 3 )
	{
		std::cout << "Usage: ./bsp Xcoord' Ycoord'"<< std::endl;
		return ( EXIT_SUCCESS );
	}

	Point	a( 367.7, 163.19 );
	Point	b( 26.84, 370.47 );
	Point	c( 283.56, 15.13 );
	Point	p( std::atoi( av[1] ), std::atoi( av[2] ) );

	if ( bsp( a, b, c, p ) )
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point doesn't belongs to the triangle" << std::endl;
	return ( EXIT_SUCCESS );
}
