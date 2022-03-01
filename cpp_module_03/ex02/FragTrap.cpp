/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:35:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:21:41 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//~~ CONSTRUCTOR

FragTrap::FragTrap( void )
{
	std::cout << "New FragTrap fresh from the factory!" << std::endl;
	return;
}

FragTrap::FragTrap( std::string name )
{
	_name = name;
	std::cout << "New FragTrap " << _name << " fresh from the factory!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src )
{
	*this = src;
	std::cout << "New FragTrap " << _name << " was cloned by the Clone-Inator" << std::endl;
	return;
}

//~~ DESTRUCTOR

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap "<< _name << " was trampled by Bullymong!" << std::endl;
	return;
}

//~~ OVERLOAD

FragTrap &		FragTrap::operator=( FragTrap const & rhs )
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return ( *this );
}

//~~ METHODS

void			FragTrap::attack( const std::string & target )
{
	if ( _energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << _name << " throw bomb to " << target \
				<< " dealing " << _attackDamage << " damage!" << std::endl;
	_energyPoints--;
	// std::cout << "EP left: " << _energyPoints << std::endl;
	return;
}

void			FragTrap::highFivesGuys( void ) const
{
	if ( _hitPoints > 0 )
		std::cout << _name << " high fives everyone in the room!" << std::endl;
	return;
}
