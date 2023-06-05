/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:56:42 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/02 11:16:15 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Span.hpp"
int main()
{
	try
	{
		Span sp = Span(300);
		std::vector<int> v;
		srand(time(NULL));
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span is " << sp.longestSpan() << std::endl;
		for(int i = 0; i < 200; i++)
		{
			v.push_back(rand());
		}
		sp.addrange(v, v.begin(), v.end());
		sp.print();
		std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span is " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}