/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:56:58 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 09:51:15 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure( void );
		Cure( Cure const & src );

		~Cure( void );

		Cure &		operator=( Cure const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target ) const;

};

#endif //~~ CURE_H
