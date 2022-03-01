/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:04:15 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 17:26:52 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//~~ CONSTRUCTOR

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
	return;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal( src )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs._type;
	return ( *this );
}

//~~ METHODS

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
	return;
}
