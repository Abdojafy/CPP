/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:01:47 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/25 03:29:42 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int	ft_atoi(char *str, int *flag)
{
	int		i;
	int		moins;
	long	res;

	i = 0;
	moins = 0;
	res = 0;
	if ((str[i]) && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (moins == 1)
		res = -res;
	if (str[i] || res > 2147483647 || res < -2147483648)
	{
		flag[0] = -1;
	}
	return ((int)res);
}

float to_float(std::string str)
{
	std::stringstream ss(str);
	float value;
	if (!(ss >> value))
		value = 0.0f;
	return (value);
}

double to_double(std::string str)
{
	std::stringstream ss(str);
	double value;
	if (!(ss >> value))
		value = 0.0;
	return (value);
}

char to_char(std::string str)
{
	std::stringstream ss(str);
	char value;
	if (!(ss >> value))
		value = '\0';
	return (value);
}

int	is_number(char *value)
{
	int i = 0;
	int	c = 0;
	int	v = 0;
	int	n = 0;
	while (value[i])
	{
		if (i == 0 && value[i] == '-')
			i++;
		if (!isdigit(value[i]))
		{
			if (value[i] == '.' && v == 0)
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

void	float_convert(float value, char *v_char, int *v_int, double *v_double)
{
	*v_double = static_cast<double> (value);
	*v_int = static_cast<int> (value);
	*v_char = static_cast<char> (value);
}

void	double_convert(double value, char *v_char, int *v_int, float *v_float)
{
	*v_float = static_cast<float> (value);
	*v_int = static_cast<int> (value);
	*v_char = static_cast<char> (value);
}

void	char_convert(char value, double *v_double, int *v_int, float *v_float)
{
	*v_float = static_cast<float> (value);
	*v_int = static_cast<int> (value);
	*v_double = static_cast<double> (value);
}

void	int_convert(int value, double *v_double, char *v_char, float *v_float)
{
	*v_float = static_cast<float> (value);
	*v_char = static_cast<char> (value);
	*v_double = static_cast<double> (value);
}

int is_char(char *value)
{
	if (isalpha(value[0]) && value[1] == '\0')
		return (1);
	return (0);
}

int is_pseudo(char *value)
{
	std::string str;
	str = value;

	if(!str.compare("nan")|| !str.compare("+inf") || !str.compare("-inf"))
		return (1);
	else if(!str.compare("nanf") || !str.compare("+inff") || !str.compare("-inff"))
		return (2);
	else
		return (0);
}

int main(int ac, char **av)
{
	// ScalarConverter::setValue("4");
	// ScalarConverter::convert("int");
	// std::cout << ScalarConverter::getValue() << std::endl;

	char v_char = '\0';
	int v_int = 0;
	double v_double = 1.0;
	float v_float = 1.0;
	int flag[4] = {0,0,0,0};

	if (ac != 2)
		std::cout << "Veuillez entrer un seul argument." << std::endl;
	else
	{
		std::string str = av[1];
		if (is_number(av[1]) == 1)
		{
			v_int = ft_atoi(av[1], flag);
			int_convert(v_int, &v_double, &v_char, &v_float);
		}
		
		else if (is_number(av[1]) == 2)
		{
			str.erase(std::remove(str.begin(), str.end(), 'f'), str.end());
			v_float = to_float(str);
			if (v_float > 2147483647.0 || v_float < -2147483648.0)
				flag[1] = -1;
			float_convert(v_float, &v_char, &v_int, &v_double);
		}
		else if (is_number(av[1]) == 3)
		{
			v_double = to_double(str);
			if (v_double > 2147483647.0 || v_double < -2147483648.0)
				flag[1] = -1;
			double_convert(v_double, &v_char, &v_int, &v_float);
		}
		else
		{
			if(is_pseudo(av[1]) == 1)
			{
				std::cout << "Char   : Impossible" << std::endl;
				std::cout << "Int    : Impossible" << std::endl;
				std::cout << "Float  : " << str << "f" << std::endl;
				std::cout << "Double : " << str << std::endl;
				exit(0);
			}
			else if(is_pseudo(av[1]) == 2)
			{
				std::cout << "Char   : Impossible" << std::endl;
				std::cout << "Int    : Impossible" << std::endl;
				std::cout << "Float  : " << str << std::endl;
				str.erase(str.length() - 1);
				std::cout << "Double : " << str << std::endl;
				exit(0);
			}
			else if (is_char(av[1]))
			{
				v_char = to_char(str);
				char_convert(v_char, &v_double, &v_int, &v_float);
			}
			else
			{
				std::cout << "Erreur" << std::endl;
				exit(1);
			}
		}
		
		if (v_char < 32 || v_char > 127)
			std::cout << "Char   : Non displayable" << std::endl;
		else
			std::cout << "Char   : '" << v_char << "'" << std::endl;

		if (flag[0] == -1)
		{
			std::cout << "Int    : out of range" << std::endl;
			std::cout << "Float  : out of range" << std::endl;
			std::cout << "Double : out of range" << std::endl;
			exit(0);
		}
		if (flag[1] == -1)
			std::cout << "Int    : out of range" << std::endl;
		else
			std::cout << "Int    : " << v_int << std::endl;
		if (v_int == v_double)
		{
			std::cout << "Float  : " << v_float << ".0f" << std::endl;
			std::cout << "Double : " << v_double << ".0" << std::endl;
		}
		else
		{	
			std::cout << "Float  : " << v_float << "f" << std::endl;
			std::cout << "Double : " << v_double << std::endl;
		}
			
	}

}