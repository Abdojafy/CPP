/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:01:47 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/24 02:14:14 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"



int	is_number(char *value)
{
	int i = 0;
	int	c = 0;
	int	v = 0;
	int	n = 0;
	while (value[i])
	{
		if (!isdigit(value[i]))
		{
			if (i == 0 && value[i] == '-')
				i++;
			else if (value[i] == '.' && v == 0)
			{
				v++;
				if (!isdigit(value[i + 1]))
					return (0);
			}	
			else if ((value[i] == 'f') && c == 0)
				c++;
			else
				return (0);
		}
		else
			n++;
		i++;	
	}
	if ((c == 1 && (value[i - 1] != 'f' || v == 0)) || n == 0)
		return (0);
	if (c == 1)
		return (2);
	if (v == 1)
		return (3);
	return (1);
}

int is_char(char *value)
{
	int i = 0;
	while (value[i])
	{
		if (!isalpha(value[i]))
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	// ScalarConverter::setValue("4");
	// ScalarConverter::convert("int");
	// std::cout << ScalarConverter::getValue() << std::endl;

	// std::string str;
	// char v_char;
	// int v_int;
	// double v_double;
	// float v_float;

	if (ac == 2)
	{
		if (is_number(av[1]) == 1)
			std::cout << "number int" << std::endl;
		else if (is_number(av[1]) == 2)
			std::cout << "number float" << std::endl;
		else if (is_number(av[1]) == 3)
			std::cout << "number double" << std::endl;
		else
		{
			if (is_char(av[1]))
				std::cout << "is char" << std::endl;
			else
				std::cout << "no" << std::endl;
		}
			
		// str = av[1];
		
		
	}
	
}