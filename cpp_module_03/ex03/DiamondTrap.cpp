/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:07:24 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/22 16:56:33 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "New DiamondTrap fresh from the factory!" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( std::string name ) : _name( name )
{
	ClapTrap::_name = _name + "_clap_name";
	// std::cout << "_name " << _name << std::endl;
	// std::cout << "ClapTrap::_name " << ClapTrap::_name << std::endl;
	// std::cout << "_hitPoints " << _hitPoints << std::endl;
	// std::cout << "_energyPoints " << _energyPoints << std::endl;
	// std::cout << "_attackDamage " << _attackDamage << std::endl;
	std::cout << "New DiamondTrap " << this->_name << " fresh from the factory!" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
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
	if ( this != &rhs )
	{
		this->DiamondTrap::_name = rhs.DiamondTrap::_name;
		this->FragTrap::_hitPoints = rhs.FragTrap::_hitPoints;
		this->ScavTrap::_energyPoints = rhs.ScavTrap::_energyPoints;
		this->FragTrap::_attackDamage = rhs.FragTrap::_attackDamage;
	}
	return ( *this );
}

//~~ METHODS

void			DiamondTrap::whoAmI( void ) const
{
	std::cout << "You may think i am " << ClapTrap::_name << \
				" but my real name is " << DiamondTrap::_name << "!" << std::endl;
	return;
}
