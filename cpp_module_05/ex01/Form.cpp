/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:11:25 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 14:30:19 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//~~ CONSTRUCTOR

Form::Form( void ) : _state( false ), _wGrade( 150 ), _xGrade( 150 )
{
	return;
}

Form::Form( std::string const name, size_t const wGrade, size_t const xGrade ) \
			: _name( name ), _state( 0 ), _wGrade( wGrade ), _xGrade( xGrade)
{
	if ( _wGrade > 150 || _xGrade > 150 )
		throw ( Bureaucrat::GradeTooLowException() );
	else if ( _wGrade < 1 || _xGrade < 1 )
		throw ( Bureaucrat::GradeTooHighException() );
	return;
}


Form::Form( Form const & src ) : _name( src._name ),	\
								_state( 0 ),			\
								_wGrade( src._wGrade ), \
								_xGrade( src._xGrade)
{
	if ( _wGrade > 150 || _xGrade > 150 )
		throw ( Bureaucrat::GradeTooLowException() );
	else if ( _wGrade < 1 || _xGrade < 1 )
		throw ( Bureaucrat::GradeTooHighException() );
	return;
}

//~~ DESTRUCTOR

Form::~Form( void )
{
	return;
}

//~~ OVERLOAD

Form &			Form::operator=( Form const & rhs )
{
	(void)rhs;
	return ( *this );
}

std::ostream &		operator<<( std::ostream & outputStream, Form const & rhs )
{
	outputStream << "Form: " << rhs.getName() \
		<< "_w" << rhs.getWGrade() << "x" << rhs.getXGrade() \
		<< ( rhs.getState() ? " is signed." : " is not signed." );
	return ( outputStream );
}

//~~ ACCESSOR

std::string const &	Form::getName( void ) const
{
	return ( _name );
}

bool				Form::getState( void ) const
{
	return ( _state );
}

size_t const &		Form::getWGrade( void ) const
{
	return ( _wGrade );
}

size_t const &		Form::getXGrade( void ) const
{
	return ( _xGrade );
}

//~~ METHODS

void	Form::beSigned( Bureaucrat & bureaucrat )
{
	if ( bureaucrat.getGrade() > _wGrade )
		throw ( Bureaucrat::GradeTooLowException() );
	else
		_state = true;
	return;
}

//~~ EXCEPTIONS

const char* Form::GradeTooHighException::what() const throw()
{
	return ( "Grade too high." );
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ( "Grade too low." );
}
