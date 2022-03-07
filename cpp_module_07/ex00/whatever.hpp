/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:34:15 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/07 17:34:51 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template< typename T >
void	swap( T & a, T & b )
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T		min( T const & a, T const & b )
{
	return ( ( a > b ) ? b : a );
}

template< typename T >
T		max( T const & a, T const & b )
{
	return ( ( a > b ) ? a : b );
}

#endif //~~ WHATEVER_H