/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:00:56 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/04 18:02:53 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>

class BitcoinExchange
{
private:
public:
	BitcoinExchange();
	BitcoinExchange(unsigned int N);
	BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange& operator=(const BitcoinExchange& obj);
	~BitcoinExchange();
};

#endif