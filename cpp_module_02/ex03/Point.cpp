/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:03:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 12:07:32 by pthomas          ###   ########lyon.fr   */
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
	(void)rhs;
	return ( *this );
}

//~~ ACCESSOR

float			Point::getFloatX( void ) const
{
	return ( this->x.toFloat() );
}

float			Point::getFloatY( void ) const
{
	return ( this->y.toFloat() );
}
