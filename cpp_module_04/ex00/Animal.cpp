/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:58:06 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//~~ CONSTRUCTOR

Animal::Animal( void )
{
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Animal &	Animal::operator=( Animal const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ ACCESSOR

std::string const	Animal::getType( void ) const
{
	return ( _type );
}

//~~ METHODS

void	Animal::makeSound( void ) const
{
	std::cout << "What am I?" << std::endl;
	return;
}
