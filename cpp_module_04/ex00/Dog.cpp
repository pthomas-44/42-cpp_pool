/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:51 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 13:45:37 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//~~ CONSTRUCTOR

Dog::Dog( void )
{
	_type = "Dog";
	return;
}

Dog::Dog( Dog const & src )
{
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Dog::~Dog( void )
{
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
