/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:15:07 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:32 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
    Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const f( Fixed( 5.05f ) - Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << Fixed::max( a, e ) << std::endl;
	std::cout << Fixed::max( a, f ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;
	std::cout << Fixed::min( a, e ) << std::endl;
	std::cout << Fixed::min( a, f ) << std::endl;

    return 0;
}