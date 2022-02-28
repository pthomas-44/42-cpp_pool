/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:45:59 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 14:31:01 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//~~ CONSTRUCTOR

Ice::Ice( void ) : AMateria( "ice" )
{
	std::cout << "Ice default constructor called" << std::endl;
	return;
}

Ice::Ice( Ice const & src ) : AMateria( src )
{
	std::cout << "Ice copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Ice::~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Ice &		Ice::operator=( Ice const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ METHODS

AMateria*	Ice::clone( void ) const
{
	return ( new Ice( *this ) );
}

void		Ice::use( ICharacter& target )
{
	std::cout << "Ice: '* shoots an ice bolt at " << target.getName() << " *'" << std::endl;
	return;
}
