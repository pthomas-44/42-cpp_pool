/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:28 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/19 16:04:04 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

static void		ShowUsage( void ) {

	std::cout << "Commands list:" << std::endl;
	std::cout << "[ADD]: add a contact to phonebook" << std::endl;
	std::cout << "[SEARCH]: search a contact in phonebook" << std::endl;
	std::cout << "[EXIT]: exit phonebook (delete all contacts)" << std::endl;
	std::cout << "Please input command: ";
	return;
}


static void		AddContact( Contact phonebook[8] ) {

	Contact		*newContact;
	std::string	input;

	if ( Contact::nbContacts == 8 ) {

		Contact::PrintPhonebook( phonebook );
		std::cout << "Too many contact, input contact index to overwrite (or 0 to cancel): ";
		std::getline( std::cin, input );
		if ( input.size() != 1 || input.at(0) < '1' || input.at(0) > Contact::nbContacts || input.at(0) > '9' ) {

			std::cout << "No contact with this index" << std::endl << std::endl;
			return;
		}
		newContact = &phonebook[input.at(0) - '0' - 1];
	}
	else {

		newContact = &phonebook[Contact::nbContacts];
		Contact::nbContacts += 1;
	}
	Contact::GetContactInfo( newContact );
	return;
}

static void		SearchContact( Contact phonebook[8] ) {

	std::string	input;

	if ( Contact::nbContacts == 0 ) {

		std::cout << std::endl << "Phonebook empty" << std::endl << std::endl;
		return;
	}
	Contact::PrintPhonebook( phonebook );
	std::cout << "Please input contact index: ";
	std::getline( std::cin, input );
	if ( input.size() != 1 || input.at(0) < '1' || input.at(0) > '9' )
		std::cout << "No contact with this index" << std::endl << std::endl;
	else
		Contact::PrintContact( phonebook[input.at(0) - '0' - 1] );
	return;
}

int		main( void ) {

	Contact		phonebook[8];
	std::string	input;

	do {

		ShowUsage();
		std::getline( std::cin, input );
		if ( !input.compare("ADD") )
			AddContact(phonebook);
		else if ( !input.compare("SEARCH") )
			SearchContact( phonebook );
	} while ( std::cin && input.compare("EXIT") );
	return ( EXIT_SUCCESS );
}
