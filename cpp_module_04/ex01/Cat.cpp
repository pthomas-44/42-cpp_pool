/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:48 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 18:09:51 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//~~ CONSTRUCTOR

Cat::Cat( void )
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
	return;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src._type;
	_brain = new Brain( *src._brain );
	return;
}

//~~ DESTRUCTOR

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete( _brain );
	return;
}

//~~ OVERLOAD

Cat &	Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	delete ( _brain );
	_brain = new Brain( *rhs._brain );
	return ( *this );
}

//~~ METHODS

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
	return;
}
