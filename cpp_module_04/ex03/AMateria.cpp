/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:38:27 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 19:33:43 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//~~ CONSTRUCTOR

AMateria::AMateria( void )
{
	return;
}

AMateria( std::string const & type ) : _type( type )
{
	return;
}

AMateria::AMateria( AMateria const & src )
{
	return;
}

//~~ DESTRUCTOR

AMateria::~AMateria( void )
{
	return;
}

//~~ OVERLOAD

AMateria &			AMateria::operator=( AMateria const & rhs )
{
	return ( *this );
}

//~~ ACCESSOR

//~~ METHODS
