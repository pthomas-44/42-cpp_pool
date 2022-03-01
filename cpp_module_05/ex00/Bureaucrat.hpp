/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:24:42 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 12:07:34 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
	public:

		Bureaucrat( std::string const name, size_t grade );
		Bureaucrat( Bureaucrat const & src );

		~Bureaucrat( void );

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string const	getName( void ) const;
		size_t				getGrade( void ) const;

		void				promote( void );
		void				demote( void );

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

		Bureaucrat( void );

		std::string const	_name;
		size_t				_grade;
};

std::ostream &			operator<<( std::ostream & outputStream, Bureaucrat const & rhs );


#endif //~~ BUREAUCRAT_H
