/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:30 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:43 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {

	public:

		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
		
		Contact( void );
		~Contact( void );
		
		static size_t	nbContacts;

		static void		GetContactInfo( Contact *newContact );
		static void		PrintPhonebook( Contact phonebook[8] );
		static void		PrintContact( Contact contact );

	private:

		static void		PrintStandarizedInfo( std::string info );

};

#endif
