/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:57:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:46:39 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int		main( void )
{
	// AAnimal*			Wut = new AAnimal(); // ne fonctionne pas
	AAnimal*			Rex = new Dog();
	AAnimal*			Leo = new Cat();

	std::cout << std::endl;

	// std::cout << Wut->getType() << " " << std::endl;
	// Wut->makeSound();
	std::cout << Rex->getType() << " " << std::endl;
	Rex->makeSound();
	std::cout << Leo->getType() << " " << std::endl;
	Leo->makeSound();
	
	std::cout << std::endl;

	// delete( Wut );
	delete( Rex );
	delete( Leo );

	return ( EXIT_SUCCESS );
}
