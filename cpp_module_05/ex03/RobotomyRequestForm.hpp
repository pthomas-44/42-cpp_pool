/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:07:51 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/01 15:28:02 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include "AForm.hpp"

typedef class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );

		~RobotomyRequestForm( void );

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		
		void		launch( void ) const;

	private:
	
		RobotomyRequestForm( void );
}RRF;

#endif //~~ ROBOTOMYREQUESTFORM_H
