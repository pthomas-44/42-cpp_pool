/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 15:15:37 by pthomas          ###   ########lyon.fr   */
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
	if ( std::cin.eof() )
		return;
	std::cout << "Last name: ";
	std::getline ( std::cin, this->_lastName );
	if ( std::cin.eof() )
		return;
	std::cout << "Nickname: ";
	std::getline ( std::cin, this->_nickname );
	if ( std::cin.eof() )
		return;
	std::cout << "Phone number: ";
	std::getline ( std::cin, this->_phoneNumber );
	if ( std::cin.eof() )
		return;
	std::cout << "Darkest secret: ";
	std::getline ( std::cin, this->_darkestSecret );
	if ( std::cin.eof() )
		return;
	std::cout << "Contact added to phonebook" << std::endl << std::endl;
	return;
}

void		Contact::printContactInfo( void ) {

	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl << std::endl;
	return;
}

void		Contact::printSummerizedContactInfo( void ) {

	_printStandarizedInfo( this->_firstName );
	_printStandarizedInfo( this->_lastName );
	_printStandarizedInfo( this->_nickname );
	return;
}

void		Contact::_printStandarizedInfo( std::string info ) {

	std::string		standarizedInfo;

	if ( info.size() > 10 )
		std::cout << info.substr( 0, 9 ) + "." << "|";
	else
		std::cout << std::setw(10) << info << "|";
	return;
}