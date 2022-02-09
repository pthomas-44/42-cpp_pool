/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:24 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:04:56 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main( void )
{
	Zombie	*Zombie1;

	Zombie1 = newZombie( "Bob" );
	randomChump( "Dylan" );
	Zombie1->announce();
	delete Zombie1;
	return ( EXIT_SUCCESS );
}
