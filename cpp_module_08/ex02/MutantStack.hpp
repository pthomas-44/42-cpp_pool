/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:37:11 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/15 12:01:00 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
	public:

		MutantStack( void );
		MutantStack( MutantStack const & src );

		~MutantStack( void );
		
		typedef typename MutantStack::container_type::iterator iterator;

		MutantStack &		operator=( MutantStack const & rhs );
		T &					operator[]( unsigned int i );
		const T &			operator[]( unsigned int i ) const;

		iterator			begin( void );
		iterator			end( void );

	private:
};

#include "MutantStack.tpp"

#endif //~~ MUTANTSTACK_H
