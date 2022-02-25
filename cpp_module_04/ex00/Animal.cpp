/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:02:23 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//~~ CONSTRUCTOR

Animal::Animal( void )
{
	return;
}

Animal::Animal( Animal const & src )
{
	(void)src;
	return;
}

//~~ DESTRUCTOR

Animal::~Animal( void )
{
	return;
}

//~~ OVERLOAD

Animal &	Animal::operator=( Animal const & rhs )
{
	(void)rhs;
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
