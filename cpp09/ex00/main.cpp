/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:00:19 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/14 11:37:21 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"BitcoinExchange.hpp"
int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			std::cerr << "Error: could not open file." << std::endl;
		else
		{
			BitcoinExchange b(av[1]);
		}
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}