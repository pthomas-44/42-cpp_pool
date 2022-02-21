/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 12:07:25 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_binaryPoint = 8;

//~~ CONSTRUCTOR

Fixed::Fixed( void ) : _value( 0 )
{
	return;
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return;
}

Fixed::Fixed( int const value )
{
	this->_value = value * ( 1 << this->_binaryPoint );
	return;
}

Fixed::Fixed( float const value )
{
	this->_value = roundf( value * ( 1 << this->_binaryPoint ) );
	return;
}

//~~ DESTRUCTOR

Fixed::~Fixed( void )
{
	return;
}

//~~ OVERLOAD

Fixed &		Fixed::operator=( Fixed const & rhs )
{
	this->_value = rhs._value;
	return ( *this );
}



bool		Fixed::operator<( Fixed const & rhs )
{
	return ( this->_value < rhs._value );
}

bool		Fixed::operator>( Fixed const & rhs )
{
	return ( this->_value > rhs._value );
}

bool		Fixed::operator<=( Fixed const & rhs )
{
	return ( this->_value <= rhs._value );
}

bool		Fixed::operator>=( Fixed const & rhs )
{
	return ( this->_value >= rhs._value );
}

bool		Fixed::operator==( Fixed const & rhs )
{
	return ( this->getRawBits() == rhs.getRawBits() );
}

bool		Fixed::operator!=( Fixed const & rhs )
{
	return ( this->getRawBits() != rhs.getRawBits() );
}



Fixed		Fixed::operator+( Fixed const & rhs )
{
	Fixed	result;

	result._value = this->_value + rhs._value ;
	return ( result );
}

Fixed		Fixed::operator-( Fixed const & rhs )
{
	Fixed	result;

	result._value = this->_value - rhs._value ;
	return ( result );
}

Fixed		Fixed::operator*( Fixed const & rhs )
{
	Fixed	result;

	result._value = (int64_t)this->_value * (int64_t)rhs._value / (1 << this->_binaryPoint);
	return ( result );
}

Fixed		Fixed::operator/( Fixed const & rhs )
{
	Fixed	result;

	result._value = (int64_t)this->_value * ( 1 << this->_binaryPoint ) / rhs._value;
	return ( result );
}



Fixed		Fixed::operator++( int )
{
	Fixed	tmp( *this );

	this->_value += 1;
	return ( tmp );
}

Fixed &		Fixed::operator++( void )
{
	this->_value += 1;
	return ( *this );
}

Fixed		Fixed::operator--( int )
{
	Fixed	tmp( *this );

	this->_value -= 1;
	return ( tmp );
}

Fixed &		Fixed::operator--( void )
{
	this->_value -= 1;
	return ( *this );
}



std::ostream &			operator<<( std::ostream & outputStream, Fixed const & rhs )
{
	outputStream << rhs.toFloat();
	return ( outputStream );
}

//~~ ACCESSOR

int			Fixed::getRawBits( void ) const
{
	return ( this->_value );
}

void		Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return;
}

//~~ METHODS

int			Fixed::toInt( void ) const
{
	return ( this->_value / ( 1 << this->_binaryPoint ) );
}

float		Fixed::toFloat( void ) const
{
	return ( ( float )this->_value / ( 1 << this->_binaryPoint ) );
}

Fixed &		Fixed::min( Fixed & lhs, Fixed & rhs )
{
	if ( rhs._value < lhs._value )
		return ( rhs );
	else
		return ( lhs );
}

Fixed const &		Fixed::min( Fixed const & lhs, Fixed const & rhs )
{
	if ( rhs._value < lhs._value )
		return ( rhs );
	else
		return ( lhs );
}

Fixed &		Fixed::max( Fixed & lhs, Fixed & rhs )
{
	if ( rhs._value > lhs._value )
		return ( rhs );
	else
		return ( lhs );
}

Fixed const &		Fixed::max( Fixed const & lhs, Fixed const & rhs )
{
	if ( rhs._value > lhs._value )
		return ( rhs );
	else
		return ( lhs );
}
