/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:37:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/15 12:00:46 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_T
# define MUTANTSTACK_T

#include "MutantStack.hpp"

//~~ CONSTRUCTOR

template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>()
{
	return;
}

template <typename T>
MutantStack<T>::MutantStack( MutantStack<T> const & src ) : std::stack<T>( src )
{
	return;
}

//~~ DESTRUCTOR

template <typename T>
MutantStack<T>::~MutantStack( void )
{
	return;
}

//~~ OVERLOAD

template <typename T>
MutantStack<T> &		MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	return ( std::stack<T>::operator=(rhs) );
}

template <typename T>
T &						MutantStack<T>::operator[]( unsigned int i )
{
	if ( i >= this->c.size() )
		throw( std::out_of_range( "Index out of range" ) );
	return ( this->c[i] );
}

template <typename T>
const T &				MutantStack<T>::operator[]( unsigned int i ) const
{
	if ( i >= this->c.size() )
		throw( std::out_of_range( "Index out of range" ) );
	return ( this->c[i] );
}

//~~ METHODS

template <typename T>
typename MutantStack<T>::container_type::iterator		MutantStack<T>::begin( void )
{
	return ( this->c.begin() );
}

template <typename T>
typename MutantStack<T>::container_type::iterator		MutantStack<T>::end( void )
{
	return ( this->c.end() );
}

#endif //~~ MUTANTSTACK_T
