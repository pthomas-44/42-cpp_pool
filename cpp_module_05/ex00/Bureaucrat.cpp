/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:24:40 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 13:01:48 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//~~ CONSTRUCTOR

Bureaucrat::Bureaucrat( void )
{
	return;
}

Bureaucrat::Bureaucrat( std::string const name, size_t grade ) : _name( name ), _grade( grade )
{
	if ( _grade > 150 )
		throw ( Bureaucrat::GradeTooLowException() );
	else if ( _grade < 1 )
		throw ( Bureaucrat::GradeTooHighException() );
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name( src._name ), _grade( src._grade )
{
	if ( _grade > 150 )
		throw ( Bureaucrat::GradeTooLowException() );
	else if ( _grade < 1 )
		throw ( Bureaucrat::GradeTooHighException() );
	return;
}

//~~ DESTRUCTOR

Bureaucrat::~Bureaucrat( void )
{
	return;
}

//~~ OVERLOAD

Bureaucrat &			Bureaucrat::operator=( Bureaucrat const & rhs )
{
	_grade = rhs._grade;
	return ( *this );
}


std::ostream &		operator<<( std::ostream & outputStream, Bureaucrat const & rhs )
{
	outputStream << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return ( outputStream );
}

//~~ ACCESSOR

std::string const &	Bureaucrat::getName( void ) const
{
	return ( _name );
}

size_t		Bureaucrat::getGrade( void ) const
{
	return ( _grade );
}

//~~ METHODS

void		Bureaucrat::promote( void )
{
	_grade--;
	if ( _grade < 1 )
		throw ( Bureaucrat::GradeTooHighException() );
	return;
}

void		Bureaucrat::demote( void )
{
	_grade++;
	if ( _grade > 150 )
		throw ( Bureaucrat::GradeTooLowException() );
	return;
}

//~~ EXCEPTIONS

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "Grade too high." );
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "Grade too low." );
}
