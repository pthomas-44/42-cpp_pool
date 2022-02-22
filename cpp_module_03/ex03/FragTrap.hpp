/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:34:59 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/22 16:52:37 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:

		FragTrap( std::string name );
		FragTrap( FragTrap const & src );

		~FragTrap( void );

		FragTrap &		operator=( FragTrap const & rhs );

		void			attack( const std::string & target );
		void			highFivesGuys( void ) const;

	protected:

		FragTrap( void );
};

#endif //~~ FRAGTRAP_H
