/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:49:32 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/28 14:00:15 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

		Character( void );
		Character( std::string name );
		Character( Character const & src );

		~Character( void );

		Character &		operator=( Character const & rhs );
		
		std::string const &		getName( void ) const;

		void		equip( AMateria* m );
		void		unequip( int idx );
		void		use( int idx, ICharacter& target );

	private:

		std::string		_name;
		AMateria*		_inventory[4];
};

#endif //~~ CHARACTER_H
