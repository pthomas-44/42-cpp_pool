/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 16:07:44 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook( void ) : _nbContacts(0) {

	return;
}

Phonebook::~Phonebook( void ) {

	return;
}

void		Phonebook::addContact( void ) {

	std::string	input;

	if ( this->_nbContacts == 8 ) {

		this->_printPhonebook();
		std::cout << "Too many contact, input contact index to overwrite (or 0 to cancel): ";
		std::getline( std::cin, input );
	    if ( !std::cin.good() )
	    	return;
		else if ( input.size() != 1 || input.at(0) < '1' || input.at(0) > '8' ) {

			std::cout << "No contact with this index" << std::endl << std::endl;
			return;
		}
		this->_contacts[input.at(0) - '0' - 1].setContactInfo();
	}
	else {

		this->_contacts[this->_nbContacts].setContactInfo();
		this->_nbContacts += 1;
	}
	return;
}

void		Phonebook::searchContact( void ) {

	std::string	input;

	if ( this->_nbContacts == 0 ) {

		std::cout << std::endl << "Phonebook empty" << std::endl << std::endl;
		return;
	}
	this->_printPhonebook();
	std::cout << "Please input contact index: ";
	std::getline( std::cin, input );
	if ( !std::cin.good() )
		return;
	if ( input.size() != 1 || input.at( 0 ) < '1' \
		|| input.at( 0 ) > ( char )( this->_nbContacts + '0' ))
		std::cout << "No contact with this index" << std::endl << std::endl;
	else
		this->_contacts[input.at(0) - '0' - 1].printContactInfo();
	return;
}

void		Phonebook::_printPhonebook( void ) const {

	size_t	i = 1;

	std::cout << std::endl;
	while ( i <= this->_nbContacts ) {

		std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
		std::cout << "|" << std::setw(10) << i << "|";
        this->_contacts[i - 1].printSummerizedContactInfo();
		std::cout << std::endl;
		i++;
	}
	std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
	return;
}
