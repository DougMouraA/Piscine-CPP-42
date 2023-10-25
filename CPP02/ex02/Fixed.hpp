/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:02:00 by douglas           #+#    #+#             */
/*   Updated: 2023/10/25 15:09:12 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
    private:
        int value;
        static const int nBits = 8;
    public:
        Fixed();
        Fixed(const int numInt);
        Fixed(const float numFloat);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed &operator=(const Fixed &nFixedPoint);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;

        static const Fixed &max(const Fixed &nFixedPoint1, const Fixed &nFixedPoint2);
        static const Fixed &min(const Fixed &nFixedPoint1, const Fixed &nFixedPoint2);
        static Fixed &max(Fixed &nFixedPoint1, Fixed &nFixedPoint2);    
        static Fixed &min(Fixed &nFixedPoint1, Fixed &nFixedPoint2);

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        Fixed operator+(const Fixed &nFixedPoint) const;
        Fixed operator-(const Fixed &nFixedPoint) const;
        Fixed operator*(const Fixed &nFixedPoint) const;
        Fixed operator/(const Fixed &nFixedPoint) const;

        bool operator>(const Fixed &nFixedPoint) const;
        bool operator<(const Fixed &nFixedPoint) const;
        bool operator>=(const Fixed &nFixedPoint) const;
        bool operator<=(const Fixed &nFixedPoint) const;
        bool operator==(const Fixed &nFixedPoint) const;
        bool operator!=(const Fixed &nFixedPoint) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &nFixedPoint);

#endif