/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:50:31 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/18 23:54:34 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ShowUsage(void) {

	std::cout << "[ADD]: add a contact to phonebook" << std::endl;
	std::cout << "[SEARCH]: search a contact in phonebook" << std::endl;
	std::cout << "[EXIT]: exit phonebook (delete all contacts)" << std::endl;
	std::cout << "Please input command: ";
	return;
}

void	GetContact(Contact *newContact) {

	std::cout << std::endl << "Please input new contact informations" << std::endl;
	std::cout << "First name: ";
	std::getline (std::cin, newContact->firstName);
	std::cout << "Last name: ";
	std::getline (std::cin, newContact->lastName);
	std::cout << "Nickname: ";
	std::getline (std::cin, newContact->nickname);
	std::cout << "Phone number: ";
	std::getline (std::cin, newContact->phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline (std::cin, newContact->darkestSecret);
	std::cout << "New contact added to phonebook" << std::endl << std::endl;
}

static	void PrintStandarizedInfo(std::string info) {

	std::string		standarizedInfo;

	if (info.size() > 10)
		standarizedInfo = info.substr(0, 9) + ".";
	else {

		standarizedInfo.assign(info);
		while (standarizedInfo.size() < 10)
			standarizedInfo.insert(0, " ");
	}
	std::cout << standarizedInfo << "|";
	return;
}

void	PrintPhonebook(Contact phonebook[8]) {

	size_t	i = 1;

	std::cout << std::endl;
	while (i <= Contact::nbContacts) {

		std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
		std::cout << "|         " << i << "|";
		PrintStandarizedInfo(phonebook[i - 1].firstName);
		PrintStandarizedInfo(phonebook[i - 1].lastName);
		PrintStandarizedInfo(phonebook[i - 1].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
	return;
}

void	PrintContact(Contact contact) {

	std::cout << "First name: " << contact.firstName << std::endl;
	std::cout << "Last name: " << contact.lastName << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phoneNumber << std::endl;
	std::cout << "Darkest secret: " << contact.darkestSecret << std::endl << std::endl;
}
