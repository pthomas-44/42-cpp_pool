/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:53:09 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:26:57 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name ), _weapon( NULL )
{
	return;
}

HumanB::~HumanB( void )
{
	return;
}

void				HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return;
}

void				HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
	return;
}
