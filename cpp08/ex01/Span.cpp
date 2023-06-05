/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:56:50 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/02 11:07:10 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span()
{
	this->N = 5;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
}

Span& Span::operator=(const Span& obj)
{
	this->N = obj.N;
	this->number = obj.number;
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
	try
	{
		if (this->number.size() == this->N)
		{
			throw std::runtime_error("The Span is full !");
		}
		this->number.push_back(number);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::shortestSpan()
{
	try
	{
		if (this->number.size() < 2)
			throw std::runtime_error("No span can found !");
		std::sort(number.begin(), number.end());
		int shortSpan = std::abs(number[1] - number[0]);
		int span = std::abs(number[1] - number[0]);
		for (unsigned int i = 2; i < number.size(); i++)
		{
			span = std::abs(number[i] - number[i - 1]);
			if (span < shortSpan)
				shortSpan = span;
		}
		return (shortSpan);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

int Span::longestSpan()
{
	try
	{
		if (this->number.size() < 2)
			throw std::runtime_error("No span can found !");
		int maxSpan = *std::max_element(number.begin(), number.end());
		int minSpan = *std::min_element(number.begin(), number.end());
		return (maxSpan - minSpan);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

void Span::addrange(std::vector<int>& v, std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		if ((this->number.size() + v.size()) > this->N)
			throw std::runtime_error("The Span is full !");
		this->number.insert(this->number.end(), begin, end);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Span::print()
{
	std::vector<int>::iterator it;
	for(it = this->number.begin(); it != this->number.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}