/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:41:38 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/11 04:25:44 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>

int	main(int ac, char *av[])
{
	std::string str;
	std::string s;
	int	j = 1;
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	if (ac >= 2)
	{
		while (j < ac)
		{
			s = av[j];	
			for (int i = 0; i < (int) s.length(); i++)
			{
				str += toupper(av[j][i]);
			}
			j++;
		}
			std::cout << str << std::endl;
	}
}