/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:06:15 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/22 19:25:51 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath>

class Fixed
{
private:
	int	value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed& obj);
	Fixed(const int n);
	Fixed(float nf);
	Fixed &operator=(const Fixed &obj);
	Fixed &operator+(const Fixed &obj);
	Fixed &operator-(const Fixed &obj);
	Fixed &operator*(const Fixed &obj);
	Fixed &operator/(const Fixed &obj);
	
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	
	bool operator>(const Fixed &obj);
	bool operator<(const Fixed &obj);
	bool operator<=(const Fixed &obj);
	bool operator>=(const Fixed &obj);
	bool operator==(const Fixed &obj);
	bool operator!=(const Fixed &obj);
	
	static Fixed& min(Fixed &obj1, Fixed &obj2);
	static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
	static Fixed& max(Fixed &obj1, Fixed &obj2);
	static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed();
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif