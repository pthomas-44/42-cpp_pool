/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:47:21 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 18:12:03 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//~~ CONSTRUCTOR

Brain::Brain( void )
{
	std::cout << "Brain constructor called" << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for( size_t i = 0; i < 100; i++ )
		this->_ideas[i] = src._ideas[i];
	return;
}

//~~ DESTRUCTOR

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

//~~ OVERLOAD

Brain &			Brain::operator=( Brain const & rhs )
{
	for( size_t i = 0; i < 100; i++ )	
		this->_ideas[i] = rhs._ideas[i];
	return ( *this );
}
