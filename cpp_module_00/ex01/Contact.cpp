/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/21 18:53:33 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

size_t		Contact::nbContacts = 0;

Contact::Contact( void ) {

	return;
}

Contact::~Contact( void ) {

	return;
}

void		Contact::setContactInfo( void ) {

	std::cout << std::endl << "Please input new contact informations" << std::endl;
	std::cout << "First name: ";
	std::getline ( std::cin, this->firstName );
	std::cout << "Last name: ";
	std::getline ( std::cin, this->lastName );
	std::cout << "Nickname: ";
	std::getline ( std::cin, this->nickname );
	std::cout << "Phone number: ";
	std::getline ( std::cin, this->phoneNumber );
	std::cout << "Darkest secret: ";
	std::getline ( std::cin, this->darkestSecret );
	std::cout << "Contact added to phonebook" << std::endl << std::endl;
	return;
}

void		Contact::printStandarizedInfo( std::string info ) {

	std::string		standarizedInfo;

	if ( info.size() > 10 )
		std::cout << info.substr( 0, 9 ) + "." << "|";
	else
		std::cout << std::setw(10) << info << "|";
	return;
}

void		Contact::printPhonebook( Contact phonebook[8] ) {

	size_t	i = 1;

	std::cout << std::endl;
	while ( i <= Contact::nbContacts ) {

		std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
		std::cout << "|         " << i << "|";
		printStandarizedInfo( phonebook[i - 1].firstName );
		printStandarizedInfo( phonebook[i - 1].lastName );
		printStandarizedInfo( phonebook[i - 1].nickname );
		std::cout << std::endl;
		i++;
	}
	std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
	return;
}

void		Contact::printContactInfo( void ) {

	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl << std::endl;
	return;
}
