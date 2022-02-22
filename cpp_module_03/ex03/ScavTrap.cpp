/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:45:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/22 16:19:56 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//~~ CONSTRUCTOR

ScavTrap::ScavTrap( void )
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "New ScavTrap fresh from the factory!" << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name )
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "New ScavTrap " << this->_name << " fresh from the factory!" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	*this = src;
	std::cout << "New ScavTrap " << this->_name << " was cloned by the Clone-Inator" << std::endl;
	return;
}

//~~ DESTRUCTOR

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap "<< this->_name << " was trampled by Bullymong!" << std::endl;
	return;
}

//~~ OVERLOAD

ScavTrap &		ScavTrap::operator=( ScavTrap const & rhs )
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

void			ScavTrap::attack( const std::string & target )
{
	if ( this->_energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << this->_name << " collides violently with " << target \
				<< " dealing " << this->_attackDamage << " damage!" << std::endl;
	_energyPoints--;
	// std::cout << "EP left: " << _energyPoints << std::endl;
	return;
}

void			ScavTrap::guardGate( void ) const
{
	std::cout << this->_name << " has entered Gate keeper mode!" << std::endl;
	return;
}
