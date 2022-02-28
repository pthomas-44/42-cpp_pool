/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:36:54 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 14:31:49 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"

int		main( void )
{
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	ICharacter*	david = new Character( "David" );
	ICharacter*	nulos = new Character( "Nulos" );

	std::cout << std::endl;

	std::cout << "Welcome Great Mage " << david->getName() << "!" << std::endl;
	std::cout << "Welcome " << nulos->getName() << "..." << std::endl;
	david->equip( ice );
	david->equip( cure );
	david->use( 0, *nulos );
	david->use( 1, *nulos );
	david->unequip( 1 );
	david->use( 1, *nulos );

	std::cout << std::endl;

	delete ( ice );
	delete ( cure );
	delete ( david );
	delete ( nulos );
	return ( EXIT_SUCCESS );
}