/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:38:26 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 09:50:01 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & src );

		virtual ~AMateria( void );

		AMateria &		operator=( AMateria const & rhs );

		std::string const & getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter & target ) const;

	protected:

		std::string		_type;
};

#endif //~~ AMATERIA_H
