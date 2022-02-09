/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:30 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 17:37:44 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
	public:

		Contact( void );
		~Contact( void );
		
		bool			setContactInfo( void );
		void			printContactInfo( void ) const ;
		void			printSummerizedContactInfo( size_t width ) const ;
		
	private:

		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
};

#endif
