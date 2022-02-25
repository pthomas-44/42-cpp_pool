/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:04:15 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:05:13 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//~~ CONSTRUCTOR

WrongCat::WrongCat( void )
{
	_type = "WrongCat";
	return;
}

WrongCat::WrongCat( WrongCat const & src )
{
	this->_type = src._type;
	return;
}

//~~ DESTRUCTOR

WrongCat::~WrongCat( void )
{
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
