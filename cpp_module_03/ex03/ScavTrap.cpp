/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:45:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:22:33 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//~~ CONSTRUCTOR

ScavTrap::ScavTrap( void )
{
	std::cout << "New ScavTrap fresh from the factory!" << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name )
{
	_name = name;
	std::cout << "New ScavTrap " << _name << " fresh from the factory!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src )
{
	_name = src._name;
	std::cout << "New ScavTrap " << _name << " was cloned by the Clone-Inator" << std::endl;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return;
}

//~~ DESTRUCTOR

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " was trampled by Bullymong!" << std::endl;
	return;
}

//~~ OVERLOAD

ScavTrap &		ScavTrap::operator=( ScavTrap const & rhs )
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return ( *this );
}

//~~ METHODS

void			ScavTrap::attack( const std::string & target )
{
	if ( _energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << _name << " collides violently with " << target \
				<< " dealing " << _attackDamage << " damage!" << std::endl;
	_energyPoints--;
	// std::cout << "EP left: " << _energyPoints << std::endl;
	return;
}

void			ScavTrap::guardGate( void ) const
{
	if ( _hitPoints > 0 )
		std::cout << _name << " has entered Gate keeper mode!" << std::endl;
	return;
}
