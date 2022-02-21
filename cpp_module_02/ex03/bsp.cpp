/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:14:38 by pthomas           #+#    #+#             */
/*   Updated: 2022/02/21 12:05:05 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		getSign( Point const lineA, Point const lineB, Point const p )
{
	float	dirCoefficient;
	float	yIntercept;
	float	sign;
	
	dirCoefficient = ( lineB.getFloatY() - lineA.getFloatY() ) / ( lineB.getFloatX() - lineA.getFloatX() );
	yIntercept = ( lineA.getFloatY() - dirCoefficient * lineA.getFloatX() );
	sign = dirCoefficient * p.getFloatX() - p.getFloatY() + yIntercept;
	if ( sign > 0 )
		return ( 1 );
	else if ( sign < 0 )
		return ( -1 );
	else
		return ( 0 );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	int	signA = getSign( b, c, a );
	int	signB = getSign( a, c, b );
	int	signC = getSign( a, b, c );

	if ( !signA || ! signB || !signC )
		return (false);
	else if ( signC == getSign( a, b, point ) \
			&& signA == getSign( b, c, point ) \
			&& signB == getSign( a, c, point ) )
		return ( true );
	else
		return ( false );
}
