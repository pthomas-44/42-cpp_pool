/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:36 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 16:07:38 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook {

	public:

		Phonebook( void );
		~Phonebook( void );

        void		addContact( void );
        void		searchContact( void );

    private:

        Contact _contacts[8];
		size_t	_nbContacts;

		void		    _printPhonebook( void ) const ;

};

#endif