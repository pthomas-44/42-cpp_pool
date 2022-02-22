/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:08 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/22 16:17:41 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
#include "ClapTrap.hpp"

class ClapTrap
{
	public:

		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );

		~ClapTrap( void );

		ClapTrap &		operator=( ClapTrap const & rhs );

		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

	protected:

		ClapTrap( void );

		std::string		_name;
		size_t			_hitPoints;
		size_t			_energyPoints;
		size_t			_attackDamage;
};

#endif //~~ CLAPTRAP_H
