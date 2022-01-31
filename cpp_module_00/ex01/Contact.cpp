/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 16:09:04 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact( void ) {

	return;
}

Contact::~Contact( void ) {

	return;
}

void		Contact::setContactInfo( void ) {

	std::cout << std::endl << "Please input new contact informations" << std::endl;
	std::cout << "First name: ";
	std::getline ( std::cin, this->_firstName );
	if ( !std::cin.good() )
		return;
	std::cout << "Last name: ";
	std::getline ( std::cin, this->_lastName );
	if ( !std::cin.good() )
		return;
	std::cout << "Nickname: ";
	std::getline ( std::cin, this->_nickname );
	if ( !std::cin.good() )
		return;
	std::cout << "Phone number: ";
	std::getline ( std::cin, this->_phoneNumber );
	if ( !std::cin.good() )
		return;
	std::cout << "Darkest secret: ";
	std::getline ( std::cin, this->_darkestSecret );
	if ( !std::cin.good() )
		return;
	std::cout << "Contact added to phonebook" << std::endl << std::endl;
	return;
}

void		Contact::printContactInfo( void ) const {

	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl << std::endl;
	return;
}

void		Contact::printSummerizedContactInfo( void ) const {

	if ( this->_firstName.size() > 10 )
		std::cout << this->_firstName.substr( 0, 9 ) + "." << "|";
	else
		std::cout << std::setw(10) << this->_firstName << "|";
	if ( this->_lastName.size() > 10 )
		std::cout << this->_lastName.substr( 0, 9 ) + "." << "|";
	else
		std::cout << std::setw(10) << this->_lastName << "|";
	if ( this->_nickname.size() > 10 )
		std::cout << this->_nickname.substr( 0, 9 ) + "." << "|";
	else
		std::cout << std::setw(10) << this->_nickname << "|";
	return;
}
