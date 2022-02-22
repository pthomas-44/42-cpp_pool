/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:07:22 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/22 16:49:27 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );

		~DiamondTrap( void );

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		void			whoAmI( void ) const;

		using			ScavTrap::attack;
		using			ClapTrap::beRepaired;
		using			ClapTrap::takeDamage;

		using			FragTrap::_hitPoints;
		using			ScavTrap::_energyPoints;
		using			FragTrap::_attackDamage;

	private:

		DiamondTrap( void );

		std::string		_name;
};

#endif //~~ DIAMONDTRAP_H
