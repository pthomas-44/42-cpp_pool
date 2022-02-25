/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:57:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:24:04 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main( void )
{
	Animal*			Wut = new Animal();
	Animal*			Rex = new Dog();
	Animal*			Leo = new Cat();
	WrongAnimal*	Bob = new WrongCat();

	std::cout << Wut->getType() << " " << std::endl;
	Wut->makeSound();
	std::cout << Rex->getType() << " " << std::endl;
	Rex->makeSound();
	std::cout << Leo->getType() << " " << std::endl;
	Leo->makeSound();
	std::cout << Bob->getType() << " " << std::endl;
	Bob->makeSound();

	delete( Wut );
	delete( Rex );
	delete( Leo );
	delete( Bob );

	return 0;
}