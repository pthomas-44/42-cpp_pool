/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:38:27 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 09:49:59 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//~~ CONSTRUCTOR

AMateria::AMateria( void )
{
	std::cout << "AMateria default constructor called" << std::endl;
	return;
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
	std::cout << "AMateria constructor called" << std::endl;
	return;
}

AMateria::AMateria( AMateria const & src ) : _type( src._type )
{
	std::cout << "AMateria copy constructor called" << std::endl;
	return;
}

//~~ DESTRUCTOR

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

AMateria &		AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ ACCESSOR

std::string const &		AMateria::getType( void ) const
{
	return ( _type );
}

//~~ METHODS

void		AMateria::use( ICharacter& target ) const
{
	(void)target;
	return;
}
