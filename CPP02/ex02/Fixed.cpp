/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:09:30 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 20:37:53 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int numInt)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = numInt << this->nBits;
}

Fixed::Fixed(const float numFloat)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(numFloat * (1 << this->nBits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &nFixedPoint)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = nFixedPoint.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->nBits));
}

int Fixed::toInt(void) const
{
    return (this->value >> this->nBits);
}

const Fixed &Fixed::max(const Fixed &nFixedPoint1, const Fixed &nFixedPoint2)
{
    if (nFixedPoint1.getRawBits() > nFixedPoint2.getRawBits())
        return (nFixedPoint1);
    return (nFixedPoint2);
}

const Fixed &Fixed::min(const Fixed &nFixedPoint1, const Fixed &nFixedPoint2)
{
    if (nFixedPoint1.getRawBits() < nFixedPoint2.getRawBits())
        return (nFixedPoint1);
    return (nFixedPoint2);
}

Fixed &Fixed::max(Fixed &nFixedPoint1, Fixed &nFixedPoint2)
{
    if (nFixedPoint1.getRawBits() > nFixedPoint2.getRawBits())
        return (nFixedPoint1);
    return (nFixedPoint2);
}

Fixed &Fixed::min(Fixed &nFixedPoint1, Fixed &nFixedPoint2)
{
    if (nFixedPoint1.getRawBits() < nFixedPoint2.getRawBits())
        return (nFixedPoint1);
    return (nFixedPoint2);
}

Fixed &Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed &Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &nFixedPoint) const
{
    return (Fixed(this->toFloat() + nFixedPoint.toFloat()));
}

Fixed Fixed::operator-(const Fixed &nFixedPoint) const
{
    return (Fixed(this->toFloat() - nFixedPoint.toFloat()));
}

Fixed Fixed::operator*(const Fixed &nFixedPoint) const
{
    return (Fixed(this->toFloat() * nFixedPoint.toFloat()));
}

Fixed Fixed::operator/(const Fixed &nFixedPoint) const
{
    return (Fixed(this->toFloat() / nFixedPoint.toFloat()));
}

bool Fixed::operator>(const Fixed &nFixedPoint) const
{
    return (this->value > nFixedPoint.getRawBits());
}

bool Fixed::operator<(const Fixed &nFixedPoint) const
{
    return (this->value < nFixedPoint.getRawBits());
}

bool Fixed::operator>=(const Fixed &nFixedPoint) const
{
    return (this->value >= nFixedPoint.getRawBits());
}

bool Fixed::operator<=(const Fixed &nFixedPoint) const
{
    return (this->value <= nFixedPoint.getRawBits());
}

bool Fixed::operator==(const Fixed &nFixedPoint) const
{
    return (this->value == nFixedPoint.getRawBits());
}

bool Fixed::operator!=(const Fixed &nFixedPoint) const
{
    return (this->value != nFixedPoint.getRawBits());
}

std::ostream &operator<<(std::ostream &out, const Fixed &nFixedPoint)
{
    out << nFixedPoint.toFloat();
    return (out);
}
