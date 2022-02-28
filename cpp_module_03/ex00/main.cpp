/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 13:35:50 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

int		main( void )
{
	ClapTrap boby( "Boby" );
	ClapTrap george( "George" );
	ClapTrap bobySon( boby );

	std::cout << std::endl;

	bobySon.takeDamage( 1000 );
	bobySon.beRepaired( 10 ); // Do nothing because he died
	boby.attack( "Great Bullymong" );
	boby.takeDamage( 4 );
	boby.beRepaired( 1 );
	george.attack( "Great Bullymong" );
	boby.beRepaired( 100 );
	george.takeDamage( 1000 );
	boby.attack( "Great Bullymong" );
	boby.takeDamage( 1000 );

	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
