/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:10 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 15:13:07 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//~~ CONSTRUCTOR

ClapTrap::ClapTrap( std::string name ) : _name( name ), \
										_hitPoints( 10 ), \
										_energyPoints( 10 ), \
										_attackDamage( 0 )
{
	std::cout << "New Claptrap " << this->_name << " fresh from the factory!" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	std::cout << "New Claptrap " << this->_name << " was cloned by the Clone-Inator" << std::endl;
	return;
}

//~~ DESTRUCTOR

ClapTrap::~ClapTrap( void )
{
	std::cout << "The Claptrap "<< this->_name << " was trampled by Bullymong" << std::endl;
	return;
}

//~~ OVERLOAD

ClapTrap &			ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return ( *this );
}

//~~ METHODS

void			ClapTrap::attack( const std::string & target )
{
	if ( this->_energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << "ClapTrap " << this->_name << " pinches " << target \
				<< " inflicting " << this->_attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
	// std::cout << "EP left: " << _energyPoints << std::endl;
	return;
}

void			ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "A boulder sent by a Bullymong inflicted " << amount \
				<< " points of damage to Claptrap " << this->_name << "!" << std::endl;
	if ( amount > _hitPoints )
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	// std::cout << "HP left: " << _hitPoints << std::endl;
	return;
}

void			ClapTrap::beRepaired( unsigned int amount )
{
	if ( _energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << "Claptrap " << _name << " has found a brand new eye and gains " \
			<< amount << " health points!" << std::endl;
	_energyPoints--;
	if ( amount > 10 - _hitPoints )
		_hitPoints = 10;
	else
		_hitPoints += amount;
	// std::cout << "HP left: " << _hitPoints << std::endl;
	// std::cout << "EP left: " << _energyPoints << std::endl;
	return;
}
