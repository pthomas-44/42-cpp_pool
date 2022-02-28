/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:52:56 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 14:30:48 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//~~ CONSTRUCTOR

Character::Character( void )
{
	std::cout << "Character default constructor called" << std::endl;
	return;
}

Character::Character( std::string name ) : _name( name )
{
	std::cout << "Character constructor called" << std::endl;
	return;
}

Character::Character( Character const & src ) : _name( src._name )
{
	std::cout << "Character copy constructor called" << std::endl;
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( src._inventory[idx] != NULL )
			_inventory[idx] = src._inventory[idx]->clone();
	}
	return;
}

//~~ DESTRUCTOR

Character::~Character( void )
{
	std::cout << "Character destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Character &			Character::operator=( Character const & rhs )
{
	this->_name = rhs._name;
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( rhs._inventory[idx] != NULL )
			this->_inventory[idx] = rhs._inventory[idx]->clone();
	}
	return ( *this );
}

//~~ ACCESSOR

std::string const & Character::getName() const
{
	return ( _name );
}

//~~ METHODS

void		Character::equip( AMateria* m )
{
	for ( size_t idx = 0; idx < 4; idx++ )
	{
		if ( _inventory[idx] == NULL )
		{
			_inventory[idx] = m;
			break ;
		}
	}
	return;
}

void		Character::unequip ( int idx )
{
	_inventory[idx] = NULL;
	return;
}

void		Character::use( int idx, ICharacter& target )
{
	if ( _inventory[idx] != NULL )
		_inventory[idx]->use( target );
	return;
}
