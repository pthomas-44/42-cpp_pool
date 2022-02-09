/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:32:48 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 13:18:36 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return;
}

Weapon::~Weapon( void )
{
	return;
}

const std::string		&Weapon::getType( void ) const
{
	const std::string	&typeRef = this->_type;

	return ( typeRef );
}


void			Weapon::setType( std::string type )
{
	this->_type = type;
	return;
}
