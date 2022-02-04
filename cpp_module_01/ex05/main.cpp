/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:25:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/04 15:11:29 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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