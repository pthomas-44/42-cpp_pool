/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:24:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 16:09:46 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"

int		main( void )
{
	try {
		Bureaucrat macron("Macron", 50);
		Bureaucrat putin("Putin", 1);
		Form war("Declaration_of_War", 10, 10);

		std::cout << macron << std::endl;
		std::cout << putin << std::endl;
		std::cout << war << std::endl;

		macron.signForm(war);
		std::cout << war << std::endl;
		putin.signForm(war);
		std::cout << war << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return ( EXIT_SUCCESS );
}