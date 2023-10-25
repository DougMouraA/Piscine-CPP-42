/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:23:11 by douglas           #+#    #+#             */
/*   Updated: 2023/10/25 14:41:40 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << this->nBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << this->nBits));
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->value / (float)(1 << this->nBits);
}

int Fixed::toInt(void) const
{
    return this->value >> this->nBits;
}

Fixed& Fixed::operator= (const Fixed& nFixedPoint)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(nFixedPoint.getRawBits());
    return *this;
}

std::ostream& operator<< (std::ostream& os, const Fixed& nFixedPoint)
{
    os << nFixedPoint.toFloat();
    return os;
}