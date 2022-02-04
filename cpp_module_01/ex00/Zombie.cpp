/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:30 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/04 14:28:54 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name)
{
	std::cout << "<" << this->name << "> " << "* Emerges from the abyss *" << std::endl;
	return;
}
 
Zombie::~Zombie( void )
{
	std::cout << "<" << this->name << "> " << "* Burnt to ashes *" << std::endl;
	return;
}

void	Zombie::announce( void ) const {

	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
