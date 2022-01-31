/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:28 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 15:36:31 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Phonebook.hpp"

static void		showUsage( void ) {

	std::cout << "Commands list:" << std::endl;
	std::cout << "[ADD]: add a contact to phonebook" << std::endl;
	std::cout << "[SEARCH]: search a contact in phonebook" << std::endl;
	std::cout << "[EXIT]: exit phonebook (delete all contacts)" << std::endl;
	std::cout << "Please input command: ";
	return;
}

int		main( void ) {

	Phonebook	phonebook;
	std::string	input;

	do {

		showUsage();
		std::getline( std::cin, input );
		if ( !std::cin.good() )
			return ( EXIT_SUCCESS );
		else if ( !input.compare( "ADD" ) )
			phonebook.addContact();
		else if ( !input.compare( "SEARCH" ) )
			phonebook.searchContact();
	} while ( std::cin.good() && input.compare( "EXIT" ) );
	return ( EXIT_SUCCESS );
}
