/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:02 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 18:23:49 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class AAnimal
{
	public:

		AAnimal( void );
		AAnimal( AAnimal const & src );

		virtual ~AAnimal( void );

		AAnimal &		operator=( AAnimal const & rhs );

		std::string const	getType( void ) const;
		virtual void		makeSound( void ) const = 0;

	protected:

		std::string		_type;
};

#endif //~~ ANIMAL_H
