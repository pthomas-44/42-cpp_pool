/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:25:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 17:54:33 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Karen
{
	public:
	
		Karen( void );
		~Karen( void );

		void	complain( std::string level );

	private:
		
		std::string 	_levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
	