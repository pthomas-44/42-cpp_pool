/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:45:57 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 09:51:04 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice( void );
		Ice( Ice const & src );

		~Ice( void );

		Ice &		operator=( Ice const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target ) const;

};

#endif //~~ ICE_H
