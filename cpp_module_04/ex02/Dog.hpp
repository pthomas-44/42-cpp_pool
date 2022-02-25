/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:41 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 18:19:41 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:

		Dog( void );
		Dog( Dog const & src );

		~Dog( void );

		Dog &		operator=( Dog const & rhs );

		void	makeSound( void ) const;

	private:

		Brain*	_brain;
};

#endif //~~ DOG_H
