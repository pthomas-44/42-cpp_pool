/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:39:02 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/08 13:01:22 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_T
# define ARRAY_T

# include "Array.hpp"

//~~ CONSTRUCTOR

template <typename T>
Array<T>::Array( void ) : _size( 0 ), _array( NULL )
{
	return;
}

template <typename T>
Array<T>::Array( unsigned int size ) : _size( size ), _array( new T[size] )
{
	return;
}

template <typename T>
Array<T>::Array( Array<T> const & src ) : _size( src._size ), _array( new T[src._size] )
{
	for( size_t i = 0; i < src._size; i++ )
		_array[i] = src._array[i];
	return;
}

//~~ DESTRUCTOR

template <typename T>
Array<T>::~Array<T>( void )
{
	delete [] _array ;
	return;
}

//~~ OVERLOAD

template <typename T>
Array<T> &		Array<T>::operator=( Array<T> const & rhs )
{
	_size = rhs._size;
	_array = new T[rhs._size];
	for( size_t i = 0; i < rhs._size; i++ )
		_array[i] = rhs._array[i];
	return ( *this );
}

template <typename T>
T &		Array<T>::operator[]( unsigned int i )
{
	if ( i >= _size )
		throw( std::exception() );
	return ( _array[i] );
}

template <typename T>
const T &	Array<T>::operator[]( unsigned int i ) const
{
	if ( i >= _size )
		throw( std::exception() );
	return ( _array[i] );
}

//~~ ACCESSOR

//~~ METHODS

#endif //~~ ARRAY_T
