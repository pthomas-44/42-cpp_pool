/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:13:15 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void ) : _nbContacts( 0 )
{
	return;
}

Phonebook::~Phonebook( void )
{
	return;
}

void		Phonebook::addContact( void )
{
	size_t		tmp;
	Contact			newContact;

	tmp = this->_nbContacts;
	while (tmp >= MAX_CONTACT)
		tmp -= MAX_CONTACT;
	if ( this->_contacts[tmp].setContactInfo() == true )
	{
		std::cout << "Contact added to phonebook" << std::endl << std::endl;
		this->_nbContacts += 1;
	}
	else
		std::cout << "Information fields cannot be empty. Aborting" << std::endl << std::endl;
	return;
}

void		Phonebook::searchContact( void ) const
{
	std::string	input;

	if ( this->_nbContacts == 0 )
	{
		std::cout << std::endl << "Phonebook empty" << std::endl << std::endl;
		return;
	}
	this->_printPhonebook();
	std::cout << "Please input contact index: ";
	std::getline( std::cin, input );
	if ( !std::cin.good() )
		return;
	if ( input.size() != 1 || input.at( 0 ) < '1' \
		|| (size_t)(input.at( 0 ) - '0') > this->_nbContacts \
		|| input.at( 0 ) - '0' > MAX_CONTACT )
	{
		std::cout << "No contact with this index" << std::endl << std::endl;
	}
	else
		this->_contacts[input.at(0) - '0' - 1].printContactInfo();
	return;
}

void		Phonebook::_printPhonebook( void ) const {

	size_t	i = 1;
	size_t	width = 10;

	std::cout << std::endl;
	while ( i <= this->_nbContacts && i <= MAX_CONTACT )
	{
		std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
		std::cout << "|" << std::setw( width ) << i << "|";
		this->_contacts[i - 1].printSummerizedContactInfo( width );
		std::cout << std::endl;
		i++;
	}
	std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
	return;
}
