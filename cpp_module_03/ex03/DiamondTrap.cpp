/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:07:24 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 18:19:13 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "New DiamondTrap fresh from the factory!" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( std::string name )
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 100;
	FragTrap::_attackDamage = 30;
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
		this->_name = rhs._name;
		this->FragTrap::_hitPoints = rhs.FragTrap::_hitPoints;
		this->ScavTrap::_energyPoints = rhs.ScavTrap::_energyPoints;
		this->FragTrap::_attackDamage = rhs.FragTrap::_attackDamage;
	}
	return ( *this );
}

//~~ METHODS

void			whoAmI( void ) const
{
	std::cout
	return;
}
