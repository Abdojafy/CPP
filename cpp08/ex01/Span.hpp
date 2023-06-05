/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:56:56 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/02 11:09:59 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>

class Span
{
private:
	unsigned int	N;
	std::vector<int> number;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& obj);
	Span& operator=(const Span& obj);
	~Span();
	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
	void addrange(std::vector<int>& v, std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void print();
};

#endif