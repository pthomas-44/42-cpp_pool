/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:29 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/18 21:01:32 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

size_t		Contact::nbContacts = 0;

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return;
}
