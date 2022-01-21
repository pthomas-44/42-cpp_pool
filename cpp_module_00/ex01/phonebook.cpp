/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:28 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/21 18:53:02 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Contact.hpp"

static void		showUsage( void ) {

	std::cout << "Commands list:" << std::endl;
	std::cout << "[ADD]: add a contact to phonebook" << std::endl;
	std::cout << "[SEARCH]: search a contact in phonebook" << std::endl;
	std::cout << "[EXIT]: exit phonebook (delete all contacts)" << std::endl;
	std::cout << "Please input command: ";
	return;
}

static void		addContact( Contact phonebook[8] ) {

	std::string	input;

	if ( Contact::nbContacts == 8 ) {

		Contact::printPhonebook( phonebook );
		std::cout << "Too many contact, input contact index to overwrite (or 0 to cancel): ";
		std::getline( std::cin, input );
		if ( input.size() != 1 || input.at(0) < '1' || input.at(0) > '9' ) {

			std::cout << "No contact with this index" << std::endl << std::endl;
			return;
		}
		phonebook[input.at(0) - '0' - 1].setContactInfo();
	}
	else {

		phonebook[Contact::nbContacts].setContactInfo();
		Contact::nbContacts += 1;
	}
	return;
}

static void		searchContact( Contact phonebook[8] ) {

	std::string	input;

	if ( Contact::nbContacts == 0 ) {

		std::cout << std::endl << "Phonebook empty" << std::endl << std::endl;
		return;
	}
	Contact::printPhonebook( phonebook );
	std::cout << "Please input contact index: ";
	std::getline( std::cin, input );
	if ( input.size() != 1 || input.at( 0 ) < '1' \
		|| input.at( 0 ) > ( char )( Contact::nbContacts + '0' ))
		std::cout << "No contact with this index" << std::endl << std::endl;
	else
		phonebook[input.at(0) - '0' - 1].printContactInfo();
	return;
}

int		main( void ) {

	Contact		phonebook[8];
	std::string	input;

	do {

		showUsage();
		std::getline( std::cin, input );
		if ( !input.compare( "ADD" ) )
			addContact(phonebook);
		else if ( !input.compare( "SEARCH" ) )
			searchContact( phonebook );
	} while ( std::cin && input.compare( "EXIT" ) );
	return ( EXIT_SUCCESS );
}
