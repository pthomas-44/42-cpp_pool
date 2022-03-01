/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:00:55 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:34:28 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//~~ CONSTRUCTOR

SCF::ShrubberyCreationForm( void ) : AForm()
{
	return;
}

SCF::ShrubberyCreationForm( std::string target ) : \
AForm( "ShrubberyCreationForm", target, 145, 137 )
{
	return;
}

SCF::ShrubberyCreationForm( SCF const & src ) : AForm( src )
{
	return;
}

//~~ DESTRUCTOR

SCF::~ShrubberyCreationForm( void )
{
	return;
}

//~~ OVERLOAD

SCF &			SCF::operator=( SCF const & rhs )
{
	(void)rhs;
	return ( *this );
}

//~~ METHODS

void		SCF::launch( void ) const
{
	std::ofstream	outputFile;
	std::string		outputFilename = getTarget() + "_shrubbery";

	try
	{
		outputFile.open( outputFilename.c_str(), std::ios_base::out | std::ios_base::trunc );
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	outputFile \
<< "               ,@@@@@@@," << std::endl \
<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl \
<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl \
<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl \
<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl \
<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl \
<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl \
<< "       |o|        | |         | |" << std::endl \
<< "       |.|        | |         | |" << std::endl \
<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
	outputFile.close();
	return;
}
