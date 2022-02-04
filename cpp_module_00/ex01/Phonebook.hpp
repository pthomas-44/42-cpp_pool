/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:36 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/04 14:34:25 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
    private:

        Contact _contacts[8];
		size_t	_nbContacts;

		void		    _printPhonebook( void ) const ;

	public:

		Phonebook( void );
		~Phonebook( void );

        void		addContact( void );
        void		searchContact( void );
};

#endif