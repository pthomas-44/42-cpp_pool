/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:36:54 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 10:22:17 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"

// int		main( void )
// {
// 	AMateria* ice = new Ice();
// 	AMateria* cure = new Cure();
// 	ICharacter*	david = new Character( "David" );
// 	ICharacter*	nulos = new Character( "Nulos" );

// 	std::cout << std::endl;

// 	std::cout << "Welcome Great Mage " << david->getName() << "!" << std::endl;
// 	std::cout << "Welcome " << nulos->getName() << "..." << std::endl;
// 	david->equip( ice );
// 	david->equip( cure );
// 	david->use( 0, *nulos );
// 	david->use( 1, *nulos );
// 	david->use( 2, *nulos ); // Do nothing because no Materia equiped
// 	david->unequip( 1 );
// 	david->use( 1, *nulos ); // Do nothing because no Materia equiped
// 	david->equip( ice );
// 	david->equip( cure );
// 	david->equip( ice );	// Do nothing because no Materia equiped

// 	std::cout << std::endl;

// 	delete ( ice );
// 	delete ( cure );
// 	delete ( david );
// 	delete ( nulos );
// 	return ( EXIT_SUCCESS );
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
