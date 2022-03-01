/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:07:32 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:28:24 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//~~ CONSTRUCTOR

PPF::PresidentialPardonForm( void ) : AForm()
{
	return;
}

PPF::PresidentialPardonForm( std::string target ) : \
AForm( "PresidentialPardonForm", target, 25, 5 )
{
	return;
}

PPF::PresidentialPardonForm( PPF const & src ) : AForm( src )
{
	return;
}

//~~ DESTRUCTOR

PPF::~PresidentialPardonForm( void )
{
	return;
}

//~~ OVERLOAD

PPF &			PPF::operator=( PPF const & rhs )
{
	(void)rhs;
	return ( *this );
}

//~~ METHODS

void		PPF::launch( void ) const
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return;
}
