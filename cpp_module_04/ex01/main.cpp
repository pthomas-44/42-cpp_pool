/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:57:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 18:16:02 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	createPack( void )
{
	Animal*	animalPack[50];
	
	for( size_t i = 0; i < 25; i++ )
		animalPack[i] = new Dog();
	for( size_t i = 25; i < 50; i++ )
		animalPack[i] = new Cat();
	for( size_t i = 0; i < 50; i++ )
		delete( animalPack[i] );
	return;
}

int		main( void )
{
	createPack();
	// while (1); // boucle inf pour tester les leaks
	return ( EXIT_SUCCESS );
}
