/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:39:08 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/15 10:14:01 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template< typename T >
class Array
{
	public:

		Array( void );
		Array( unsigned int size );
		Array( Array const & src );

		~Array( void );

		Array &		operator=( Array const & rhs );
		T &				operator[]( unsigned int i );
		const T &		operator[]( unsigned int i ) const;

	private:

		unsigned int	_size;
		T*				_array;
};

# include "Array.tpp"

#endif //~~ ARRAY_H
