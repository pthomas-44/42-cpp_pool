/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:51 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:27:49 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//~~ CONSTRUCTOR

Dog::Dog( void ) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	return;
}

Dog::Dog( Dog const & src ) : Animal( src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src._type;
	_brain = new Brain( *src._brain );
	return;
}

//~~ DESTRUCTOR

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete( _brain );
	return;
}

//~~ OVERLOAD

Dog &	Dog::operator=( Dog const & rhs )
{
	this->_type = rhs._type;
	delete ( _brain );
	_brain = new Brain( *rhs._brain );
	return ( *this );
}

//~~ METHODS

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!" << std::endl;
	return;
}
