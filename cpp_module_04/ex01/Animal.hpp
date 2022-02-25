/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:02 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:18:25 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
	public:

		Animal( void );
		Animal( Animal const & src );

		virtual ~Animal( void );

		Animal &		operator=( Animal const & rhs );

		std::string const	getType( void ) const;
		virtual void		makeSound( void ) const;

	protected:

		std::string		_type;
};

#endif //~~ ANIMAL_H
