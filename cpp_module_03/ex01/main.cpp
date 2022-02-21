/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 17:30:12 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main( void )
{
	ClapTrap	clap( "ClapBoy" );
	ScavTrap	scav( "ScavBoy" );

	clap.attack( "BullyMong" );
	clap.takeDamage( 5 );
	clap.beRepaired( 2 );
	scav.attack( "BullyMong" );
	scav.takeDamage( 5 );
	scav.beRepaired( 2 );
	scav.guardGate();
	return ( EXIT_SUCCESS );
}
