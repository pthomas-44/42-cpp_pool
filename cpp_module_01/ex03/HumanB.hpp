/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:54:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 17:39:23 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB
{
	public:

		HumanB( std::string name );
		~HumanB( void );

		void    attack( void ) const;
		void    setWeapon( Weapon &weapon );

	private:

		std::string		_name;
        Weapon          *_weapon;
};

#endif
