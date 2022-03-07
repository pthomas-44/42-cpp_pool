/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:53:33 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/07 17:36:20 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "iter.hpp"

int		main( void )
{
	int array[7] = { 3, -1, 1, 1, 2, -4, 4 };
	char str[] = ">ki^D]o>aaj@abqoa`";

	iter( array, 7, plusFour );
	iter( array, 7, print );
	std::cout << std::endl;

	iter( str, 18, plusFour );
	iter( str, 18, print );
	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
