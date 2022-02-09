/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:36 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 18:52:37 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <cstdlib>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACT 8

class Phonebook
{
	public:

		Phonebook( void );
		~Phonebook( void );

		void		addContact( void );
		void		searchContact( void ) const ;

	private:

		Contact		_contacts[8];
		size_t		_nbContacts;

		void		_printPhonebook( void ) const ;
};

#endif
