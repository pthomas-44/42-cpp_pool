/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:11:25 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:33:31 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//~~ CONSTRUCTOR

AForm::AForm( void ) : _state( false ), _wGrade( 150 ), _xGrade( 150 )
{
	return;
}

AForm::AForm( std::string const name,	\
			std::string const target,	\
			size_t const wGrade,		\
			size_t const xGrade )		\
			: _name( name ),			\
			_target( target ),			\
			_state( 0 ),				\
			_wGrade( wGrade ),			\
			_xGrade( xGrade)
{
	return;
}


AForm::AForm( AForm const & src ) : _name( src._name ),		\
									_target( src._target ),	\
									_state( 0 ),		\
									_wGrade( src._wGrade ),	\
									_xGrade( src._xGrade)
{
	return;
}

//~~ DESTRUCTOR

AForm::~AForm( void )
{
	return;
}

//~~ OVERLOAD

AForm &			AForm::operator=( AForm const & rhs )
{
	(void)rhs;
	return ( *this );
}

std::ostream &		operator<<( std::ostream & outputStream, AForm const & rhs )
{
	outputStream << "AForm: " << rhs.getName() \
		<< "_w" << rhs.getWGrade() << "x" << rhs.getXGrade() \
		<< ( rhs.getState() ? " is signed." : " is not signed." );
	return ( outputStream );
}

//~~ ACCESSOR

std::string const &	AForm::getName( void ) const
{
	return ( _name );
}

std::string const &	AForm::getTarget( void ) const
{
	return ( _target );
}

bool				AForm::getState( void ) const
{
	return ( _state );
}

size_t const &		AForm::getWGrade( void ) const
{
	return ( _wGrade );
}

size_t const &		AForm::getXGrade( void ) const
{
	return ( _xGrade );
}

//~~ METHODS

void	AForm::beSigned( Bureaucrat & bureaucrat )
{
	if ( bureaucrat.getGrade() > _wGrade )
		throw ( Bureaucrat::GradeTooLowException() );
	else
		_state = true;
	return;
}

void	AForm::execute( Bureaucrat const & executor ) const
{
	if ( executor.getGrade() > _xGrade )
		throw ( AForm::GradeTooLowException() );
	else
		launch();
	return;
}

//~~ EXCEPTIONS

const char* AForm::GradeTooHighException::what() const throw()
{
	return ( "Grade too high." );
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ( "Grade too low." );
}
