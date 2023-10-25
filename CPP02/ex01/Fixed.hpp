/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:12:22 by douglas           #+#    #+#             */
/*   Updated: 2023/10/25 14:56:34 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int nBits = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& copy);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed& operator=(const Fixed& nFixedPoint);
};

std::ostream& operator<< (std::ostream& os, const Fixed& nFixedPoint);

#endif
