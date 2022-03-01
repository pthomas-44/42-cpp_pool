/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:07:24 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:22:15 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	ClapTrap::_name = "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "New DiamondTrap fresh from the factory!" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( std::string name ) : _name( name )
{
	std::cout << "New DiamondTrap " << this->_name << " fresh from the factory!" << std::endl;
	ClapTrap::_name = _name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	// std::cout << "_name " << _name << std::endl;
	// std::cout << "ClapTrap::_name " << ClapTrap::_name << std::endl;
	// std::cout << "_hitPoints " << _hitPoints << std::endl;
	// std::cout << "_energyPoints " << _energyPoints << std::endl;
	// std::cout << "_attackDamage " << _attackDamage << std::endl;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap( src ), ScavTrap( src ), FragTrap( src )
{
	*this = src;
	std::cout << "New DiamondTrap " << this->_name << " was cloned by the Clone-Inator" << std::endl;
	return;
}

//~~ DESTRUCTOR

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap "<< this->_name << " was trampled by Bullymong!" << std::endl;
	return;
}

//~~ OVERLOAD

DiamondTrap &		DiamondTrap::operator=( DiamondTrap const & rhs )
{
	this->ClapTrap::_name = rhs.ClapTrap::_name;
	this->DiamondTrap::_name = rhs.DiamondTrap::_name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return ( *this );
}

//~~ METHODS

void			DiamondTrap::whoAmI( void ) const
{
	if ( _hitPoints > 0 )
		std::cout << "You may think i am " << ClapTrap::_name << \
				" but my real name is " << DiamondTrap::_name << "!" << std::endl;
	return;
}
