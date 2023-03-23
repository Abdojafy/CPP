/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:06:11 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/22 22:42:57 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Fixed.hpp"

//constructor
Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	value = obj.value;
}

Fixed::Fixed(const int n)
{
	value = n << bits;
}

Fixed::Fixed(float nf)
{
	value = (roundf(nf * (1 << bits)));
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
	{
		value = obj.value;
	}
	return (*this);
}

bool Fixed::operator>(const Fixed& obj)
{
	if (this->value > obj.value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& obj)
{
	if (this->value < obj.value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& obj)
{
	if (this->value >= obj.value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& obj)
{
	if (this->value <= obj.value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& obj)
{
	if (this->value != obj.value)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& obj)
{
	if (this->value == obj.value)
		return (true);
	return (false);
}



Fixed& Fixed::operator+(const Fixed &obj)
{
	Fixed& r = *this;
	float nf;
	nf = this->toFloat() + obj.toFloat();
	r.value = (roundf(nf * (1 << bits)));
	return (r);
}

Fixed& Fixed::operator-(const Fixed &obj)
{
	Fixed& r = *this;
	float nf;
	nf = this->toFloat() - obj.toFloat();
	r.value = (roundf(nf * (1 << bits)));
	return (r);
}

Fixed& Fixed::operator*(const Fixed &obj)
{
	Fixed& r = *this;
	float nf;
	nf = this->toFloat() * obj.toFloat();
	r.value = (roundf(nf * (1 << bits)));
	return (r);
}

Fixed& Fixed::operator/(const Fixed &obj)
{
	Fixed& r = *this;
	float nf;
	nf = this->toFloat() / obj.toFloat();
	r.value = (roundf(nf * (1 << bits)));
	return (r);
}


Fixed& Fixed::operator++()
{
	value++;
	return(*this);
}

Fixed& Fixed::operator--()
{
	value--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	
	value--;
	return (temp);
}



Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return(obj1);
	return (obj2);
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return(obj1);
	return (obj2);
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	Fixed r1 = obj1;
	Fixed r2 = obj2;
	
	if (r1 > r2)
		return(obj1);
	return (obj2);
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	Fixed r1 = obj1;
	Fixed r2 = obj2;
	
	if (r1 < r2)
		return(obj1);
	return (obj2);
}


std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}


int Fixed::getRawBits( void ) const
{
	return (value);
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}


float Fixed::toFloat( void ) const
{
	return ((float)value / (1 << bits));
}

int Fixed::toInt( void ) const
{
	return ((int)(value >> bits));
}


Fixed::~Fixed()
{
}