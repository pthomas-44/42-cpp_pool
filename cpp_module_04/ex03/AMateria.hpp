/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:38:26 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 19:33:30 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>

class AMateria
{
	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & src );

		virtual ~AMateria( void );

		AMateria &		operator=( AMateria const & rhs );

		std::string const & getType( void ) const; // Returns the materia type

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );

	protected:

		std::string		_type;
};

#endif //~~ AMATERIA_H
