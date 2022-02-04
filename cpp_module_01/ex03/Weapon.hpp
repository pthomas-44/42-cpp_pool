/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:32:47 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/04 14:37:40 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H


#include <string>

class	Weapon
{
	private:

		std::string		_type;

	public:

		Weapon( std::string type );
		~Weapon( void );

		std::string		getType( void ) const;
		void			setType( std::string type );
};


#endif
