/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:37:03 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/08 13:12:12 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <algorithm>

template< typename T >
void	easyfind( T container, int needle )
{
	typename T::iterator it;

	it = std::find( container.begin(), container.end(), needle );
	if ( it == container.end() )
		throw ( std::exception() );
}

#endif //~~ EASYFIND_H
