/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:25:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:36:10 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Karen.hpp"

int		main( void )
{
	Karen	Katherine;

	Katherine.complain( "DEBUG" );
	Katherine.complain( "INFO" );
	Katherine.complain( "WARNING" );
	Katherine.complain( "ERROR" );
	return ( EXIT_SUCCESS );
}