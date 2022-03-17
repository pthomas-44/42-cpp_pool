/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:26:12 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/17 19:12:22 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template< typename T >
void	iter( T *array, size_t size, void (*f)( T const & elem ) )
{
	for ( size_t i = 0; i < size; i++ )
        f( array[i] );
	return;
}

template< typename T >
void	display( T const & value )
{
	std::cout << value;
	return;
}

#endif //~~ ITER_H
