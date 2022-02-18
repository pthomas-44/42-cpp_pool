/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:03:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/18 18:12:12 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//~~ CONSTRUCTOR

Point::Point( void ) : x( 0 ), y( 0 )
{
	return;
}

Point::Point( float const x, float const y ) : x( x ), y( y )
{
	return;
}

Point::Point( Point const & src ) : x( src.x ), y( src.y )
{
	return;
}

//~~ DESTRUCTOR

Point::~Point( void )
{
	return;
}

//~~ OVERLOAD

Point &			Point::operator=( Point const & rhs )
{
	if ( this != &rhs )
	{
		void;
	}
	return ( *this );
}

//~~ ACCESSOR

//~~ METHODS
