/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 15:08:28 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main( void )
{
	ClapTrap boby( "Boby" );
	ClapTrap george( "George" );
	ClapTrap bobySon( boby );

	bobySon.takeDamage( 1000 );
	bobySon.beRepaired( 10 ); // Do nothing because he died
	boby.attack( "Great Bullymong" );
	boby.takeDamage( 4 );
	george.attack( "Great Bullymong" );
	george.attack( "Great Bullymong" );
	boby.beRepaired( 1 );
	george.attack( "Great Bullymong" );
	george.attack( "Great Bullymong" );
	boby.beRepaired( 1 );
	george.attack( "Great Bullymong" );
	george.attack( "Great Bullymong" );
	boby.beRepaired( 1 );
	george.attack( "Great Bullymong" );
	george.attack( "Great Bullymong" );
	boby.beRepaired( 1 );
	george.attack( "Great Bullymong" );
	george.attack( "Great Bullymong" );
	boby.beRepaired( 100 );
	george.attack( "Nothing" ); // Do nothing because he don't have energy
	george.takeDamage( 1000 );
	boby.attack( "Great Bullymong" );
	boby.takeDamage( 1000 );
	return ( EXIT_SUCCESS );
}
