/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:25 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:52:18 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//~~ CONSTRUCTOR

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	(void)src;
	return;
}

//~~ DESTRUCTOR

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	(void)rhs;
	return ( *this );
}

//~~ ACCESSOR

std::string const	WrongAnimal::getType( void ) const
{
	return ( _type );
}

//~~ METHODS

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "What am I?" << std::endl;
	return;
}
