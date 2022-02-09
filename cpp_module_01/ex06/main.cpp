/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:25:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:43:26 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Karen.hpp"

int		main( int ac, char** av )
{
	if ( ac != 2 )
		return ( EXIT_FAILURE );

	Karen	Katherine;

	Katherine.complain( av[1] );
	return ( EXIT_SUCCESS );
}