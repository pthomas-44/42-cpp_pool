/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:08:11 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 16:09:37 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "AForm.hpp"

typedef class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );

		~PresidentialPardonForm( void );

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		
		void		launch( void ) const;

	private:
	
		PresidentialPardonForm( void );
}PPF;

#endif //~~ PRESIDENTIALPARDONFORM_H
