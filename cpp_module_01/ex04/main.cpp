/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:59:46 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/04 14:38:12 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cerrno>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

void	printError( std::string cmd, std::string value, std::string error )
{
	std::cout << cmd << ": ";
	if ( !value.empty() )
		std::cout << value << ": ";
	if ( !error.empty() )
		std::cout << error << std::endl;
	else
		std::cout << strerror(errno) << std::endl;
	return;
}

int		main( int ac, char **av )
{
	if ( ac != 4 )
	{
		printError("Usage", "", "replace input-file string-to-replace new-string");
		return ( EXIT_FAILURE );
	}

	std::string		inputFilename = av[1];
	std::string		outputFilename = inputFilename + ".replace";
	std::string		haystack;
	std::string		needle = av[2];
	std::size_t		pos = 0;
	std::string		substitute = av[3];
	std::ifstream	inputFile( inputFilename );
	if ( inputFile.is_open() == false )
	{
		printError("replace", inputFilename, "");
		return ( EXIT_FAILURE );
	}
	std::ofstream	outputFile( outputFilename );
	if ( outputFile.is_open() == false )
	{
		inputFile.close();
		printError("replace", "", "");
		return ( EXIT_FAILURE );
	}
	std::stringstream	buffer;

	buffer << inputFile.rdbuf();
	haystack = buffer.str();
	while ( (pos = haystack.find( needle, pos )) != std::string::npos )
	{
		haystack.erase( pos, needle.size() );
		haystack.insert ( pos, substitute );
		pos += substitute.size();
	}
	outputFile << haystack;
	inputFile.close();
	outputFile.close();
	return ( EXIT_SUCCESS );
}
