/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:23 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:26:24 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );

		~WrongAnimal( void );

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string const	getType( void ) const;
		void		makeSound( void ) const;

	protected:

		std::string		_type;
};

#endif //~~ WRONGANIMAL_H
