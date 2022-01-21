/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:27:23 by pthomas           #+#    #+#             */
/*   Updated: 2022/01/21 18:52:10 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

void	convert_str_to_uppercase( char *str ) {

	size_t	i = 0;

	while ( str[i] ) {

		str[i] = toupper(str[i]);
		i++;
	}
}

int	main( int ac, char **av ) {

	int	i = 1;

	if ( ac == 1 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {

		while ( i < ac ) {

			convert_str_to_uppercase( av[i] );
			std::cout << av[i];
			i++;
		}
	}
	std::cout << std::endl;
	return ( EXIT_SUCCESS );
}
