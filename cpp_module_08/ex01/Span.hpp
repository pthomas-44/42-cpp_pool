/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:19:59 by pthomas           #+#    #+#             */
/*   Updated: 2022/03/08 15:08:55 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{
	public:

		Span( void );
		Span( unsigned int N );
		Span( Span const & src );

		~Span( void );

		Span &		operator=( Span const & rhs );

		void			addNumber( int value );
		unsigned int	shortestSpan( void ) const;
		unsigned int	longestSpan( void ) const;
		void			fillRandom( void );

	private:

		std::vector<int>	_array;
};

#endif //~~ SPAN_H
