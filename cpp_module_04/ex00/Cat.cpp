/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:48 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:26:00 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//~~ CONSTRUCTOR

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	return;
}

Cat::Cat( Cat const & src ) : Animal( src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
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
