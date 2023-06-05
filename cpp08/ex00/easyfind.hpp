/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:15:03 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/02 09:51:50 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<vector>

template<typename T>
void easyfind(T container, int to_find)
{
	try
	{
		if (std::find(container.begin(), container.end(), to_find) == container.end())
		{	
			throw std::runtime_error(" is out of range !");
		}
		std::cout << to_find << " is in range" << std::endl;	
	}
	catch(const std::exception& ex)
	{
		std::cerr << to_find << ex.what() << std::endl;
	}
}	