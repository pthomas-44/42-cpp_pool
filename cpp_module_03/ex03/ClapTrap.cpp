/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:10 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:17:03 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//~~ CONSTRUCTOR

ClapTrap::ClapTrap( void )
{
	std::cout << "New ClapTrap fresh from the factory!" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), \
										_hitPoints( 10 ), \
										_energyPoints( 10 ), \
										_attackDamage( 0 )
{
	std::cout << "New ClapTrap " << _name << " fresh from the factory!" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src ) : _name( src._name ), \
										_hitPoints( src._hitPoints ), \
										_energyPoints( src._energyPoints ), \
										_attackDamage( src._attackDamage )
{
	std::cout << "New ClapTrap " << _name << " was cloned by the Clone-Inator!" << std::endl;
	return;
}

//~~ DESTRUCTOR

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " was trampled by Bullymong!" << std::endl;
	return;
}

//~~ OVERLOAD

ClapTrap &			ClapTrap::operator=( ClapTrap const & rhs )
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return ( *this );
}

//~~ METHODS

void			ClapTrap::attack( const std::string & target )
{
	if ( _energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << _name << " pinches " << target \
				<< " dealing " << _attackDamage << " damage!" << std::endl;
	_energyPoints--;
	return;
}

void			ClapTrap::takeDamage( unsigned int amount )
{
	if ( _hitPoints == 0 )
		return;
	std::cout << "Bullymong punched " << _name << " dealing " \
				<< amount << " damage!" << std::endl;
	if ( amount > _hitPoints )
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	return;
}

void			ClapTrap::beRepaired( unsigned int amount )
{
	if ( _energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << _name << " repairs himself for " \
			<< amount << " health points!" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
	return;
}
