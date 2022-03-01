/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:54:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 16:15:52 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//~~ CONSTRUCTOR

Intern::Intern( void )
{
	_formList[0] = "shrubbery creation";
	_formList[1] = "robotomy request";
	_formList[2] = "presidential pardon";
	return;
}

Intern::Intern( Intern const & src )
{
	(void)src;
	return;
}

//~~ DESTRUCTOR

Intern::~Intern( void )
{
	return;
}

//~~ OVERLOAD

Intern &			Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return ( *this );
}

//~~ METHODS

AForm*		Intern::makeForm( std::string name, std::string target )
{
	size_t i = 0;
	
	while ( i < 3 && name.compare( _formList[i] ))
		i++;
	switch (i)
	{
		case 0:
			return ( new SCF( target ) );
		case 1:
			return ( new RRF( target ) );
		case 2:
			return ( new PPF( target ) );
		default:
			std::cout << "No form named: " << name << "." << std::endl;
			break ;
	}
	return ( NULL );
}
