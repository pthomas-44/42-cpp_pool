/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:38:46 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:20:35 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat( void );
		Cat( Cat const & src );

		~Cat( void );

		Cat &		operator=( Cat const & rhs );

		void	makeSound( void ) const;
};

#endif //~~ CAT_H
