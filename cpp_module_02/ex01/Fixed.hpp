/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/18 17:39:59 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	public:

		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int value );
		Fixed( float value );

		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		int			toInt( void ) const;
		float		toFloat( void ) const;

	private:

		int					_value;
		static int const	_binaryPoint;
};

std::ostream &			operator<<( std::ostream & outputStream, Fixed const & rhs );

#endif /* FIXED_H */
