/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/18 10:37:29 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_binaryPoint = 8;

//~~ CONSTRUCTOR

Fixed::Fixed( void ) : _value( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed( int const value )
{
	std::cout << "INT constructor called" << std::endl;
	this->_value = value << this->_binaryPoint;
	return;
}

Fixed::Fixed( float const value )
{
	std::cout << "FLOAT constructor called" << std::endl;
	this->_value = roundf( value * ( 1 << this->_binaryPoint ) );
	return;
}

//~~ DESTRUCTOR

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Fixed &		Fixed::operator=( Fixed const & instance )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if ( this != &instance )
	{
		this->_value = instance._value;
	}
	return ( *this );
}

std::ostream &		operator<<( std::ostream & outputStream, Fixed const & instance )
{
	outputStream << instance.toFloat();
	return ( outputStream );
}

//~~ ACCESSOR

int			Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_value );
}

void		Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return;
}

//~~ METHODS

int			Fixed::toInt( void ) const
{
	// std::cout << toInt member function called" << std::endl;
	return ( this->_value >> this->_binaryPoint );
}

float		Fixed::toFloat( void ) const
{
	// std::cout << toFloat member function called" << std::endl;
	return ( ( float )this->_value / ( 1 << this->_binaryPoint ) );
}
