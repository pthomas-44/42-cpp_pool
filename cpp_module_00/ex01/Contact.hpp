/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:30 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/21 18:53:10 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <cstdlib>
# include <string>

class Contact {

	public:

		Contact( void );
		~Contact( void );
		
		void			setContactInfo( void );
		void			printContactInfo( void );
		
		static size_t	nbContacts;

		static void		printPhonebook( Contact phonebook[8] );

	private:

		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;

		static void		printStandarizedInfo( std::string info );

};

#endif
