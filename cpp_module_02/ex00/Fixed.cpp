/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/14 11:25:54 by pthomas          ###   ########lyon.fr   */
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
