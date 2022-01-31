/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:54:30 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 14:57:47 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {

	public:

		Contact( void );
		~Contact( void );
		
		void			setContactInfo( void );
		void			printContactInfo( void );
		void			printSummerizedContactInfo( void );
		
	private:

		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
		
		static void		_printStandarizedInfo( std::string info );

};

#endif
