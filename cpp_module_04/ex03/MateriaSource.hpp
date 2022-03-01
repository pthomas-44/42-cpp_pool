/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:47:02 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 10:14:34 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & src );

		~MateriaSource( void );

		MateriaSource &		operator=( MateriaSource const & rhs );

		void				learnMateria( AMateria* m );
		AMateria*			createMateria( std::string const & type );

	private:
		
		AMateria*		_inventory[4];
};

#endif //~~ MATERIASOURCE_H
