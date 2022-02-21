/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:16 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 15:37:59 by pthomas          ###   ########lyon.fr   */
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

		bool		operator<( Fixed const & rhs ) const;
		bool		operator>( Fixed const & rhs ) const;
		bool		operator<=( Fixed const & rhs ) const;
		bool		operator>=( Fixed const & rhs ) const;
		bool		operator==( Fixed const & rhs ) const;
		bool		operator!=( Fixed const & rhs ) const;

		Fixed		operator+( Fixed const & rhs ) const;
		Fixed		operator-( Fixed const & rhs ) const;
		Fixed		operator*( Fixed const & rhs ) const;
		Fixed		operator/( Fixed const & rhs ) const;

		Fixed &		operator++( void );
		Fixed		operator++( int );
		Fixed &		operator--( void );
		Fixed		operator--( int );


		int			getRawBits( void ) const;
		void		setRawBits( int const raw );

		int						toInt( void ) const;
		float					toFloat( void ) const;
		static Fixed &			min( Fixed & lhs, Fixed &rhs );
		static Fixed const &	min( Fixed const & lhs, Fixed const &rhs );
		static Fixed &			max( Fixed & lhs, Fixed &rhs );
		static Fixed const &	max( Fixed const & lhs, Fixed const &rhs );

	private:

		int					_value;
		static int const	_binaryPoint;
};

std::ostream &			operator<<( std::ostream & outputStream, Fixed const & rhs );

#endif /* FIXED_H */
