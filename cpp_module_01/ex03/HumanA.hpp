/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:43:22 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 17:39:11 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void    attack( void ) const;

	private:

		std::string		_name;
        Weapon          &_weapon;
};

#endif
