/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:00:54 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:28:15 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <fstream>
# include "AForm.hpp"

typedef class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );

		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		
		void		launch( void ) const;

	private:
	
		ShrubberyCreationForm( void );
}SCF;

#endif //~~ SHRUBBERYCREATIONFORM_H
