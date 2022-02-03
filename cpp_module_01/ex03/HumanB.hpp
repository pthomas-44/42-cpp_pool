/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:54:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/03 16:56:16 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string		_name;
        Weapon          *_weapon;

	public:

		HumanB( std::string name );
		~HumanB( void );

		void    attack( void ) const;
		void    setWeapon( Weapon &weapon );

};

#endif
