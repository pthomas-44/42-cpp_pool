/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:56:59 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 09:51:29 by pthomas          ###   ########lyon.fr   */
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

void		Cure::use( ICharacter& target ) const
{
	std::cout << "Cure: '* heals " << target.getName() << "'s wounds" << std::endl;
	return;
}
