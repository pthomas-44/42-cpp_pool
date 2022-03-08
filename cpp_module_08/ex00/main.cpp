/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:37:04 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/08 13:18:42 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main( void )
{
	{
		std::vector<int>	tab;
		int					needle;

		for( size_t i = 0; i < 10; i++ )
			tab.push_back( i );
		needle = 4;		
		try {
			easyfind( tab, needle );
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << " not in container" << std::endl;
		}
		needle = 10;		
		try {
			easyfind( tab, needle );
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << " not in container" << std::endl;
		}
	}
	{
		std::list<char>		tab;
		char				needle;

		for( size_t i = 'a'; i < 'h'; i++ )
			tab.push_back( i );
		needle = 'f';		
		try {
			easyfind( tab, needle );
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << " not in container" << std::endl;
		}
		needle = 'x';		
		try {
			easyfind( tab, needle );
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << " not in container" << std::endl;
		}
	}
	return ( EXIT_SUCCESS );
}
