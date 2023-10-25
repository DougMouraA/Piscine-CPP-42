/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:15:07 by douglas           #+#    #+#             */
/*   Updated: 2023/10/25 15:23:25 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
int main( void ) 
{
	Fixed a(10);
	Fixed b(10);
	Fixed c(5.4f);
	Fixed d(15.8f);

	std::cout << "Is a(" << a <<") == a(" << a << ") ?\n";
	std::cout << (a==a) << "\n"; 
	std::cout << "Is a(" << a <<") != a(" << a << ") ?\n";
	std::cout << (a!=a) << "\n"; 
	std::cout << "Is a(" << a <<") <= a(" << a << ") ?\n";
	std::cout << (a<=a) << "\n"; 
	std::cout << "Is a(" << a <<") < d(" << d << ") ?\n";
	std::cout << (a<d) << "\n"; 
	std::cout << "Is a(" << a <<") > c(" << c << ") ?\n";
	std::cout << (a>c) << "\n"; 
	std::cout << "Is a(" << a <<") >= a(" << a << ") ?\n";
	std::cout << (a>=a) << "\n"; 
	std::cout << "\n";
	std::cout << "a(" << a <<") + a(" << a << ")\n";
	std::cout << a + a << "\n";
	std::cout << "a(" << a <<") - a(" << a << ")\n";
	std::cout << a - a << "\n";
	std::cout << "a(" << a <<") * a(" << a << ")\n";
	std::cout << a * a << "\n";
	std::cout << "a(" << a <<") / a(" << a << ")\n";
	std::cout << a / a << "\n";
	std::cout << "Min a(" << a <<") e d(" << d << ")\n";
	std::cout << a.min(a, d) << "\n";
	std::cout << "Max a(" << a <<") e c(" << c << ")\n";
	std::cout << a.max(a, c) << "\n";
	return 0;
}
*/

int main( void ) 
{
	Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}