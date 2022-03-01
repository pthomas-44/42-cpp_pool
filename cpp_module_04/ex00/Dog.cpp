/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:51 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:26:13 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//~~ CONSTRUCTOR

Dog::Dog( void ) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";

	return;
}

Dog::Dog( Dog const & src ) : Animal( src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Dog &	Dog::operator=( Dog const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ METHODS

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!" << std::endl;
	return;
}
