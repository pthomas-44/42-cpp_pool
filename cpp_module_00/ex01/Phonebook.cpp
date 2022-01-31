/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 14:56:47 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook( void ) : nbContacts(0) {

	return;
}

Phonebook::~Phonebook( void ) {

	return;
}

void		Phonebook::addContact( void ) {

	std::string	input;

	if ( this->nbContacts == 8 ) {

		this->printPhonebook();
		std::cout << "Too many contact, input contact index to overwrite (or 0 to cancel): ";
		std::getline( std::cin, input );
		if ( input.size() != 1 || input.at(0) < '1' || input.at(0) > '8' ) {

			std::cout << "No contact with this index" << std::endl << std::endl;
			return;
		}
		this->contacts[input.at(0) - '0' - 1].setContactInfo();
	}
	else {

		this->contacts[this->nbContacts].setContactInfo();
		this->nbContacts += 1;
	}
	return;
}

void		Phonebook::searchContact( void ) {

	std::string	input;

	if ( this->nbContacts == 0 ) {

		std::cout << std::endl << "Phonebook empty" << std::endl << std::endl;
		return;
	}
	this->printPhonebook();
	std::cout << "Please input contact index: ";
	std::getline( std::cin, input );
	if ( input.size() != 1 || input.at( 0 ) < '1' \
		|| input.at( 0 ) > ( char )( this->nbContacts + '0' ))
		std::cout << "No contact with this index" << std::endl << std::endl;
	else
		this->contacts[input.at(0) - '0' - 1].printContactInfo();
	return;
}

void		Phonebook::printPhonebook( void ) {

	size_t	i = 1;

	std::cout << std::endl;
	while ( i <= this->nbContacts ) {

		std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
		std::cout << "|         " << i << "|";
        this->contacts[i - 1].printSummerizedContactInfo();
		std::cout << std::endl;
		i++;
	}
	std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
	return;
}
