/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 13:35:25 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main( void )
{
	ClapTrap	clap( "ClapBoy" );
	ScavTrap	scav( "ScavBoy" );

	std::cout << std::endl;

	clap.attack( "BullyMong" );
	clap.takeDamage( 5 );
	clap.beRepaired( 2 );

	std::cout << std::endl;

	scav.attack( "BullyMong" );
	scav.takeDamage( 5 );
	scav.beRepaired( 2 );
	scav.guardGate();

	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
