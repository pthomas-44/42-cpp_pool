/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:38 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/31 18:12:47 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {

	public:

		Zombie( void );
		~Zombie( void );

		void	setName( std::string name );
		void	announce( void ) const ;

	private:

		std::string  name;

};

#endif
