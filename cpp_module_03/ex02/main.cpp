/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:23:08 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main( void )
{
	FragTrap	frag( "FragBoy" );

	std::cout << std::endl;

	frag.attack( "BullyMong" );
	frag.takeDamage( 5 );
	frag.beRepaired( 2 );
	frag.highFivesGuys();

	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
