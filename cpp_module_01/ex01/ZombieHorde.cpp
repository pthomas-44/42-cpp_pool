/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:40:44 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/04 14:28:54 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name )
{
	Zombie		*horde = new Zombie[N];

	for ( int i = 0; i < N; i++ )
		horde[i].setName( name );
	return ( horde );
}
