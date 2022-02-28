/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:56:59 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 14:30:56 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//~~ CONSTRUCTOR

Cure::Cure( void ) : AMateria( "cure" )
{
	std::cout << "Cure default constructor called" << std::endl;
	return;
}

Cure::Cure( Cure const & src ) : AMateria( src )
{
	std::cout << "Cure copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Cure &			Cure::operator=( Cure const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ METHODS

AMateria*	Cure::clone( void ) const
{
	return ( new Cure( *this ) );
}

void		Cure::use( ICharacter& target )
{
	std::cout << "Cure: '* heals " << target.getName() << "'s wounds" << std::endl;
	return;
}
