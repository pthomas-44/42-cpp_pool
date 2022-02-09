/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:25:06 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:40:55 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
	this->_levelsMessage[0] = &Karen::debug;
	this->_levelsMessage[1] = &Karen::info;
	this->_levelsMessage[2] = &Karen::warning;
	this->_levelsMessage[3] = &Karen::error;
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	return;
}

Karen::~Karen( void )
{
	return;
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return;
}

void	Karen::complain( std::string level )
{
	for ( size_t i = 0; i < 4; i++ )
	{
		if ( !level.compare( this->_levels[i] ) )
		{
			( this->*_levelsMessage[i] )();
			return;
		}
	}
	return;
}
