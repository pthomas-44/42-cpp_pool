/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 18:51:44 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

bool		Contact::setContactInfo( void )
{
	Contact		newContact;
	bool		ret;
	
	ret = true;
	std::cout << std::endl << "Please input new contact informations" << std::endl;
	std::cout << "First name: "; std::getline ( std::cin, newContact._firstName );
	if ( !std::cin.good() || newContact._firstName.empty() )
		ret = false;
	std::cout << "Last name: "; std::getline ( std::cin, newContact._lastName );
	if ( !std::cin.good() || newContact._lastName.empty() )
		ret = false;
	std::cout << "Nickname: "; std::getline ( std::cin, newContact._nickname );
	if ( !std::cin.good() || newContact._nickname.empty() )
		ret = false;
	std::cout << "Phone number: "; std::getline ( std::cin, newContact._phoneNumber );
	if ( !std::cin.good() || newContact._phoneNumber.empty() )
		ret = false;
	std::cout << "Darkest secret: "; std::getline ( std::cin, newContact._darkestSecret );
	if ( !std::cin.good() || newContact._darkestSecret.empty() )
		ret = false;
	if ( ret == true )
		*this = newContact;
	return ( ret );
}

void		Contact::printContactInfo( void ) const {

	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl << std::endl;
	return;
}

void		Contact::printSummerizedContactInfo( size_t width ) const {

	if ( this->_firstName.size() > width )
		std::cout << this->_firstName.substr( 0, width - 1 ) + "." << "|";
	else
		std::cout << std::setw(width) << this->_firstName << "|";
	if ( this->_lastName.size() > width )
		std::cout << this->_lastName.substr( 0, width - 1 ) + "." << "|";
	else
		std::cout << std::setw(width) << this->_lastName << "|";
	if ( this->_nickname.size() > width )
		std::cout << this->_nickname.substr( 0, width - 1 ) + "." << "|";
	else
		std::cout << std::setw(width) << this->_nickname << "|";
	return;
}
