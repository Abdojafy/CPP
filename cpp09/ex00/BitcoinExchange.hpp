/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:00:56 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/14 14:24:48 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<map>
#include<cstdlib>
#include<fstream>
#include <sstream>
#include <ctime>

class BitcoinExchange
{
private:
	std::map<std::string, double> 	data;
	std::string						file_arg;
public:
	BitcoinExchange();
	BitcoinExchange(std::string arg);
	BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange& operator=(const BitcoinExchange& obj);
	~BitcoinExchange();
	
	void	read_file();
	void	erase_white_spaces(std::string &line);
	void	parse_line(std::string &line);
	bool	check_date(std::string &date, std::string line);
	bool	is_digit(std::string num, bool value, std::string line);
	bool	check_value(std::string value_line, double &value, std::string line);
	double	Bitcoin_value(std::string &date);
};

#endif