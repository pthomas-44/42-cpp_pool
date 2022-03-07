/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:19 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/07 14:54:07 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate( void )
{
	int		random;

	srand( time( NULL ) );
	random = rand();
	if ( random % 3 == 0 )
	{
		std::cout << "Create object of type: A" << std::endl;
		return ( new A() );
	}
	else if ( random % 3 == 1 )
	{
		std::cout << "Create object of type: B" << std::endl;
		return ( new B() );
	}
	else if ( random % 3 == 2 )
	{
		std::cout << "Create object of type: C" << std::endl;
		return ( new C() );
	}
	return ( NULL );
}

void	identify( Base* p )
{
	Base* ptr;
	if ( ( ptr = dynamic_cast<A*>( p ) ) )
		std::cout << "Type of identified object: A" << std::endl;
	if ( ( ptr = dynamic_cast<B*>( p ) ) )
		std::cout << "Type of identified object: B" << std::endl;
	if ( ( ptr = dynamic_cast<C*>( p ) ) )
		std::cout << "Type of identified object: C" << std::endl;
	return;
}

void	identify( Base& p )
{
	try
	{
		A&	ref = dynamic_cast<A&>( p );
		(void)ref;
		std::cout << "Type of identified object: A" << std::endl;
		return;
	}
	catch( const std::exception& e )
	{
		try
		{
			B&	ref = dynamic_cast<B&>( p );
			(void)ref;
			std::cout << "Type of identified object: B" << std::endl;
			return;
		}
		catch( const std::exception& e )
		{
			try
			{
				C&	ref = dynamic_cast<C&>( p );
				(void)ref;
				std::cout << "Type of identified object: C" << std::endl;
				return;
			}
			catch( const std::exception& e )
			{
				return;
			}
		}
	}
}

int		main( void )
{
	Base*	ptr = generate();
	Base&	ref = *ptr;

	std::cout << "Identification using reference" << std::endl;
	identify( ref );

	std::cout << "Identification using pointer" << std::endl;
	identify( ptr );

	delete ptr;

	return ( EXIT_SUCCESS );
}
