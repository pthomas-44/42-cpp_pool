/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:46 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 18:20:19 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:

		Cat( void );
		Cat( Cat const & src );

		~Cat( void );

		Cat &		operator=( Cat const & rhs );

		void	makeSound( void ) const;

	private:

		Brain*	_brain;
};

#endif //~~ CAT_H
