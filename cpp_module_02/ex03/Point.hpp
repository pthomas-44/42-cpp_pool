/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:03:08 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/18 18:15:08 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:

		Point( void );
		Point( float const x, float const y );
		Point( Point const & src );

		~Point( void );

		Point &		operator=( Point const & rhs );

	private:

		Fixed const		x;
		Fixed const		y;
};

#endif //~~ POINT_H
