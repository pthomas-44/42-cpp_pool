/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:32:48 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 18:18:15 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {

	return;
}

Weapon::~Weapon( void ) {

	return;
}

std::string		Weapon::getType( void ) const {


	return ( this->_type );
}


void			Weapon::setType( std::string type ) {

	this->_type = type;
	return;
}
