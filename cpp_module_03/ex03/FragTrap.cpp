/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:35:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/22 16:21:13 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//~~ CONSTRUCTOR

FragTrap::FragTrap( void )
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "New FragTrap fresh from the factory!" << std::endl;
	return;
}

FragTrap::FragTrap( std::string name )
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "New FragTrap " << this->_name << " fresh from the factory!" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	*this = src;
	std::cout << "New FragTrap " << this->_name << " was cloned by the Clone-Inator" << std::endl;
	return;
}

//~~ DESTRUCTOR

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap "<< this->_name << " was trampled by Bullymong!" << std::endl;
	return;
}

//~~ OVERLOAD

FragTrap &		FragTrap::operator=( FragTrap const & rhs )
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

void			FragTrap::attack( const std::string & target )
{
	if ( this->_energyPoints == 0 || _hitPoints == 0 )
		return;
	std::cout << this->_name << " throw bomb to " << target \
				<< " dealing " << this->_attackDamage << " damage!" << std::endl;
	_energyPoints--;
	// std::cout << "EP left: " << _energyPoints << std::endl;
	return;
}

void			FragTrap::highFivesGuys( void ) const
{
	std::cout << this->_name << " high fives everyone in the room!" << std::endl;
	return;
}
