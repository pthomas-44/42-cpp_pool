/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:24:14 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:48:41 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main( void )
{
    try {
        Bureaucrat dylan("dylan", 120);

        ShrubberyCreationForm shrubbery("Rue de Potier");
        dylan.signForm(shrubbery);
        dylan.executeForm(shrubbery);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat palpatine("Palpatine", 46);

        RobotomyRequestForm robotomy("Darth Vader");
        palpatine.signForm(robotomy);
        palpatine.executeForm(robotomy);
        palpatine.promote();
        palpatine.executeForm(robotomy);
        palpatine.demote();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat god("God", 1);

        PresidentialPardonForm pardon("Putin");
        god.signForm(pardon);
        god.executeForm(pardon);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat dylan("Dylan", 120);

        PresidentialPardonForm pardon("Manon");
        dylan.signForm(pardon);
        dylan.executeForm(pardon);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return ( EXIT_SUCCESS );
}