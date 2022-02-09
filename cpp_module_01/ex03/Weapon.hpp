/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:32:47 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:28:23 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class	Weapon
{
	public:

		Weapon( std::string type );
		~Weapon( void );

		std::string const &		getType( void ) const;
		void					setType( std::string type );

	private:

		std::string		_type;
};


#endif
