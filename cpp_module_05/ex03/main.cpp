/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:24:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 16:16:19 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main( void )
{
	Bureaucrat	dylan("Dylan", 1);
	Intern		someRandomIntern;
	AForm*		form;
	

	form = someRandomIntern.makeForm("robotomy request", "Bender");
	dylan.signForm(*form);
	dylan.executeForm(*form);
	delete form;
	form = someRandomIntern.makeForm("world peace request", "World");
	delete form;
	return ( EXIT_SUCCESS );
}