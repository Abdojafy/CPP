/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:01:42 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/04 18:03:13 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	this->N = 5;
}

BitcoinExchange::BitcoinExchange(unsigned int N)
{
	this->N = N;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	this->N = obj.N;
	this->number = obj.number;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}
