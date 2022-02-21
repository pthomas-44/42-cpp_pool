/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:45:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 17:51:27 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );

		~ScavTrap( void );

		ScavTrap &		operator=( ScavTrap const & rhs );

		void			attack( const std::string & target );
		void			guardGate( void ) const;

	protected:

		ScavTrap( void );
};

#endif //~~ SCAVTRAP_H
