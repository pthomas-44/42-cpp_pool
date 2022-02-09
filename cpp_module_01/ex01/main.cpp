/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:24 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:06:05 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name );

int		main( void )
{
	Zombie* theWalkingDead;
	size_t  hordeSize = 10;

	theWalkingDead = zombieHorde( hordeSize, "Mine" );
	for ( size_t i = 0; i < hordeSize; i++ )
		theWalkingDead[i].announce();
	delete [] theWalkingDead;
	return ( EXIT_SUCCESS );
}
