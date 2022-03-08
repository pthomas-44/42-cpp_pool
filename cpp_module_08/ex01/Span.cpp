/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:20:00 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/08 15:32:42 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//~~ CONSTRUCTOR

Span::Span( void ) : _array( std::vector<int>() )
{
	_array.reserve( 0 );
	return;
}

Span::Span( unsigned int N ) : _array( std::vector<int>() )
{
	_array.reserve( N );
	return;
}

Span::Span( Span const & src ) : _array( std::vector<int>( src._array ) )
{
	return;
}

//~~ DESTRUCTOR

Span::~Span( void )
{
	return;
}

//~~ OVERLOAD

Span &			Span::operator=( Span const & rhs )
{
	_array = std::vector<int>( rhs._array );
	return ( *this );
}

//~~ METHODS

void			Span::addNumber( int value )
{
	if ( _array.capacity() == _array.size() )
		throw ( std::out_of_range("Vector full") );
	else
		_array.push_back( value );
	return;
}

unsigned int	Span::shortestSpan( void ) const
{
	if ( _array.size() < 2 )
		throw ( std::out_of_range("Not enough elements") );

	std::vector<int>	tmp( _array );
	unsigned int		span = std::numeric_limits<unsigned int>::max();
	unsigned int		diff;

	std::sort( tmp.begin(), tmp.end() );
	for ( size_t i = 1; i < _array.size(); i++ )
	{
		diff =  _array[i] - _array[i - 1];
		span = ( diff < span ) ? diff : span;
	}
	return ( span );
}

unsigned int	Span::longestSpan( void ) const
{
	if ( _array.size() < 2 )
		throw ( std::out_of_range("Not enough elements") );

	unsigned int max = *std::max_element( _array.begin(), _array.end() );
	unsigned int min = *std::min_element( _array.begin(), _array.end() );

	return ( max - min );
}

void		Span::fillRandom( void )
{
	_array.assign(_array.capacity(), 0);
    srand( time( NULL ) );
    std::generate( _array.begin(), _array.end(), std::rand);
}
