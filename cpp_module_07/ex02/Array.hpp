/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:39:08 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/07 17:09:19 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template< typename T >
class Array
{
	public:

		Array<T>( void );
		Array<T>( unsigned int size );
		Array<T>( Array const & src );

		~Array<T>( void );

		Array &		operator=( Array<T> const & rhs );
		T &			operator[]( unsigned int i ) const;

	private:

		unsigned int	_size;
		T*				_array;
};

# include "Array.tpp"

#endif //~~ ARRAY_H
