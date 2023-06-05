/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:16:05 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/02 09:53:34 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

int main(void)
{
	try
	{		
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(-3);
		v.push_back(5);
		v.push_back(15);
		v.push_back(10);

		easyfind(v, 25);
		easyfind(v, 15);
		easyfind(v, 1);
		easyfind(v, -1);
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}