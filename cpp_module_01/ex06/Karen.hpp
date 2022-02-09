/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:25:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:43:36 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Karen
{
	public:
	
		Karen( void );
		~Karen( void );

		void	complain( std::string level );

	private:
		
		std::string 	_levels[4];

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
	