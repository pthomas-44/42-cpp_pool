/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:56:34 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:40:22 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <stdlib.h>

//~~ CONSTRUCTOR

RRF::RobotomyRequestForm( void ) : AForm()
{
	return;
}

RRF::RobotomyRequestForm( std::string target ) : \
AForm( "RobotomyRequestForm", target, 72, 45 )
{
	return;
}

RRF::RobotomyRequestForm( RRF const & src ) : AForm( src )
{
	return;
}

//~~ DESTRUCTOR

RRF::~RobotomyRequestForm( void )
{
	return;
}

//~~ OVERLOAD

RRF &			RRF::operator=( RRF const & rhs )
{
	(void)rhs;
	return ( *this );
}

//~~ METHODS

void		RRF::launch( void ) const
{
    std::cout << "* Drill noises intensifies *" << std::endl;
    srand( time( NULL ) );
    if ( rand() % 2 == 0 )
	{
        std::cout << getTarget() << " has been robotomized." << std::endl;
	}
    else
	{
        std::cout << "Robotomization of " << getTarget() << " failed." << std::endl;
	}
	return;
}
