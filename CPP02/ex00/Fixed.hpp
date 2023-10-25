/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:37:08 by douglas           #+#    #+#             */
/*   Updated: 2023/10/25 14:16:04 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int value;
        static const int nBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        ~Fixed();

        Fixed& operator=(const Fixed& nFixedPoint);
        int getRawBits() const;
        void setRawBits(const int raw);
};

#endif