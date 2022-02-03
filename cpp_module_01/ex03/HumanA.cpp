/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:43:21 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/03 16:48:51 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {

	return;
}

HumanA::~HumanA( void ) {

	return;
}

void	HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return;
}
