/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/10 17:45:04 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//~~ CONSTRUCTOR

Fixed::Fixed( void ) : _value( 0 )
{
	return;
}

Fixed::Fixed( Fixed const & src ) : _value( src._value )
{
	return;
}

//~~ DESTRUCTOR

Fixed::~Fixed( void )
{
	return;
}

//~~ OVERLOAD

Fixed &			Fixed::operator=( Fixed const & instance )
{
	if ( this != &instance )
	{
		/* code */
	}
	return ( *this );
}

std::ostream &		operator<<( std::ostream & outputStream, Fixed const & instance )
{
	outputStream << /* code */;
	return ( outputStream );
}

//~~ ACCESSOR

//~~ METHODS
