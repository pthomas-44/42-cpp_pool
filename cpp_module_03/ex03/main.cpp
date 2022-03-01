/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:23:19 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main( void )
{
	DiamondTrap	diamond( "DiamondBoy" );

	std::cout << std::endl;

	diamond.attack( "BullyMong" );
	diamond.takeDamage( 5 );
	diamond.beRepaired( 2 );
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
