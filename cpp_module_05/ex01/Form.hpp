/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:11:33 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 12:54:26 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	public:

		Form( std::string const name, size_t const wGrade, size_t const xGrade );
		Form( Form const & src );

		~Form( void );

		Form &		operator=( Form const & rhs );

		std::string const &	getName( void ) const;
		bool				getState( void ) const;
		size_t const &		getWGrade( void ) const;
		size_t const &		getXGrade( void ) const;

		void				beSigned( Bureaucrat bureaucrat );

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

	private:

		Form( void );

		std::string const	_name;
		bool				_state;
		size_t const		_wGrade;
		size_t const		_xGrade;
};

std::ostream &			operator<<( std::ostream & outputStream, Form const & rhs );

#endif //~~ FORM_H
