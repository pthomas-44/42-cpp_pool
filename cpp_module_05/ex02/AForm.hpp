/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:11:33 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:33:06 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
class AForm;
# include "Bureaucrat.hpp"

class AForm
{
	public:

		AForm( std::string const name,		\
				std::string const target,	\
				size_t const wGrade,		\
				size_t const xGrade );
		AForm( AForm const & src );

		virtual ~AForm( void );

		AForm &		operator=( AForm const & rhs );

		std::string const &	getName( void ) const;
		std::string const &	getTarget( void ) const;
		bool				getState( void ) const;
		size_t const &		getWGrade( void ) const;
		size_t const &		getXGrade( void ) const;

		void				beSigned( Bureaucrat & bureaucrat );
		void				execute( Bureaucrat const & executor ) const;
		virtual void		launch( void ) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

	protected:

		AForm( void );

	private:
	
		std::string const	_name;
		std::string const	_target;
		bool				_state;
		size_t const		_wGrade;
		size_t const		_xGrade;

};

std::ostream &			operator<<( std::ostream & outputStream, AForm const & rhs );

#endif //~~ AFORM_H
