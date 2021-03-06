/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:30 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:23:06 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "* A zombie emerges from the abyss *" << std::endl;
	return;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << ": * Burnt to ashes *" << std::endl;
	return;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
	return;
}

void	Zombie::announce( void ) const {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
