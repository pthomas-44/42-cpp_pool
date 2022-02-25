/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:47:23 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/25 17:48:24 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	public:

		Brain( void );
		Brain( Brain const & src );

		~Brain( void );

		Brain &		operator=( Brain const & rhs );

	private:

		std::string		_ideas[100];
};


#endif //~~ BRAIN_H
