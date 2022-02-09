/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/09 19:55:01 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public:

		Fixed( void );
		Fixed( Fixed const & src );

		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );

		int getRawBits( void ) const;
	
	private:

		int					_value;
		static int const	_binaryPoint;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif /* FIXED_H */
