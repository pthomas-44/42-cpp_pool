/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:48 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 16:53:12 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//~~ CONSTRUCTOR

Cat::Cat( void )
{
	_type = "Cat";
	return;
}

Cat::Cat( Cat const & src )
{
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Cat::~Cat( void )
{
	return;
}

//~~ OVERLOAD

Cat &	Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ METHODS

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
	return;
}
