/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:47:01 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/15 11:18:54 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//~~ CONSTRUCTOR

MateriaSource::MateriaSource( void )
{
	for ( size_t idx = 0; idx < 4; idx++ )
		_inventory[idx] = NULL;
	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( src._inventory[idx] != NULL )
			_inventory[idx] = src._inventory[idx]->clone();
	}
	return;
}

//~~ DESTRUCTOR

MateriaSource::~MateriaSource( void )
{
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( _inventory[idx] != NULL )
			delete ( _inventory[idx] );
	}
	return;
}

//~~ OVERLOAD

MateriaSource &		MateriaSource::operator=( MateriaSource const & rhs )
{
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( _inventory[idx] != NULL )
			delete ( _inventory[idx] );
		_inventory[idx] = rhs._inventory[idx]->clone();
	}
	return ( *this );
}

//~~ METHODS

void		MateriaSource::learnMateria( AMateria* m )
{
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( _inventory[idx] == NULL )
		{
			_inventory[idx] = m;
			break;
		}
	}
	return;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( _inventory[idx] != NULL && !_inventory[idx]->getType().compare( type ) )
			return ( _inventory[idx]->clone() );
	}
	return ( NULL );
}

