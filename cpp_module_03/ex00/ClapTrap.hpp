/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:11:08 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 16:51:13 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
	public:

		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );

		~ClapTrap( void );

		ClapTrap &		operator=( ClapTrap const & rhs );

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	private:

		ClapTrap( void );

		std::string		_name;
		size_t			_hitPoints;
		size_t			_energyPoints;
		size_t			_attackDamage;

		static size_t const		maxHP;
};

#endif //~~ CLAPTRAP_H
