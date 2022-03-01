/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:41:02 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//~~ CONSTRUCTOR

AAnimal::AAnimal( void )
{
	std::cout << "AAnimal constructor called" << std::endl;
	return;
}

AAnimal::AAnimal( AAnimal const & src )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

AAnimal &	AAnimal::operator=( AAnimal const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ ACCESSOR

std::string const	AAnimal::getType( void ) const
{
	return ( _type );
}

//~~ METHODS

void	AAnimal::makeSound( void ) const
{
	std::cout << "What am I?" << std::endl;
	return;
}
