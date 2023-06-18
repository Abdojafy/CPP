/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:01:42 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/18 16:32:52 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	throw std::invalid_argument("Arguments !");
}

void BitcoinExchange::erase_white_spaces(std::string &line)
{
	
	size_t first = 0;
	
	while (line[first] && std::isspace(line[first]))
		first++;
	line.erase(0, first);
	size_t last = line.length() - 1;
	while (last > 0 && std::isspace(line[last]))
		last--;
	line.erase(last + 1);
}

bool BitcoinExchange::is_digit(std::string num, bool value, std::string line)
{
	int	i = 0;
	int	v = 0;
	if (num.empty())
		return (0);
	while (num[i])
	{
		if (!std::isdigit(num[i]))
		{
			if (value && num[i] == '.')
				v++;
			else if (value)
			{
				if (num[i] == '-' && i == 0 && num[i + 1])
				{
					if (std::isdigit(num[i + 1]))
						return (std::cout << "Error: not a positive number." << std::endl, 0);
				}
				return (std::cout << "Error: bad input => " << line << std::endl, 0);

			}
			else
				return (0);
		}
		i++;
	}
	if (v > 1)
		return (0);
	return (1);
}

bool BitcoinExchange::check_date(std::string &date, std::string line)
{
	std::istringstream linee(date);
	std::string s;
	if (!std::getline(linee, s, '-') || !is_digit(s, 0, line))
		return (0);
	int year = std::atoi(s.c_str());
	if (!std::getline(linee, s, '-') || s.length() != 2 || !is_digit(s, 0, line))
		return (0);
	int month = std::atoi(s.c_str());
	if (!std::getline(linee, s) || s.length() != 2 || !is_digit(s, 0, line))
		return (0);
	int day = std::atoi(s.c_str());
	std::tm time;
	std::memset(&time, 0, sizeof(time));
	time.tm_year = year - 1900;
	time.tm_mon = month - 1;
	time.tm_mday = day;
	time_t t = std::mktime(&time);
	return (t != -1 && time.tm_year == year - 1900 && time.tm_mon == month - 1 && time.tm_mday == day);
}

bool	BitcoinExchange::check_value(std::string value_line, double &value, std::string line)
{
	if (!is_digit(value_line, true, line))
		return (0);
	std::istringstream ss(value_line);
	ss >> value;
	if (value > 1000)
		return (std::cout << "Error: too large a number." << std::endl, 0);
	return (1);
}

double	BitcoinExchange::Bitcoin_value(std::string &date)
{
	if (data.count(date))
		return (data[date]);
	std::map<std::string, double>::iterator it = data.lower_bound(date);
	if (it != data.begin())
		it--;
	return (it->second);
}

void BitcoinExchange::parse_line(std::string &line)
{
	std::istringstream ss(line);
	std::string date;
	std::string value_line;
	double		value;
	double		exchange;
	std::getline(ss, date, '|');
	erase_white_spaces(date);
	if (!check_date(date, line) || !std::getline(ss, value_line))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	erase_white_spaces(value_line);
	if (!check_value(value_line, value, line))
		return ;
	exchange = value * Bitcoin_value(date);
	std::cout << date << " => " << value << " = " << exchange << std::endl;
}

void BitcoinExchange::read_file()
{
	std::fstream file("data.csv");
	if (!file.is_open())
	{
		std::cout << "Error: could not open data file." << std::endl;
		exit(1);
	}
	else
	{
		std::string line;
		if (std::getline(file, line))
		{
			erase_white_spaces(line);
			if (strcmp(line.c_str(), "date,exchange_rate"))
				std::cout << "Error: Bad format" << std::endl;
			while (std::getline(file, line))
			{
				erase_white_spaces(line);
				if (line.empty())
					continue;
				std::istringstream ss(line);
				std::string key;
				double value;
				std::getline(ss, key, ',');
				ss >> value;
				data.insert(std::make_pair(key, value));
			}
		}
		else
			std::cout << "Error: Empty file" << std::endl;
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(std::string arg)
{
	this->file_arg = arg;
	read_file();
	std::fstream file(file_arg);
	if (!file.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
	else
	{
		std::string line;
		if (std::getline(file, line))
		{
			erase_white_spaces(line);
			if (strcmp(line.c_str(), "date | value"))
				std::cout << "Error: Bad format" << std::endl;
			while (std::getline(file, line))
			{
				erase_white_spaces(line);
				if (line.empty())
					continue;
				parse_line(line);
			}
		}
		else
			std::cout << "Error: Empty file" << std::endl;
	}
	file.close();
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
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}
