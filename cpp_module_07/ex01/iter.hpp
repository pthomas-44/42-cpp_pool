/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:26:12 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/17 18:33:17 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template< typename T >
void	iter( T *array, size_t size, void (*f)( T & elem ) )
{
	for ( size_t i = 0; i < size; i++ )
        f( array[i] );
	return;
}

template< typename T >
void	plusFour( T & value )
{
	value += 4 ;
	return;
}

template< typename T >
void	display( T & value )
{
	std::cout << value;
	return;
}

#endif //~~ ITER_H
