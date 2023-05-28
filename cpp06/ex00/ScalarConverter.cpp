/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:01:52 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/28 04:03:30 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	if (this != &obj)
		*this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	(void) obj;
	return (*this);
}

void ScalarConverter::convert(std::string str)
{
	char 	v_char = '\0';
	int		v_int = 0;	
	double 	v_double = 0.0;
	float 	v_float = 0.0;;
	int 	flag_double = 0;
	int 	flag_int = 0;
	
	if (is_number(str) == 1)
	{
		v_int = ft_atoi(str, &flag_int);
		int_convert(v_int, &v_double, &v_char, &v_float);
	}
	else if (is_number(str) == 2)
	{
		str.erase(std::remove(str.begin(), str.end(), 'f'), str.end());
		v_float = to_float(str, &flag_int);
		if (v_float > 2147483647.0 || v_float < -2147483648.0)
			flag_double= -1;
		float_convert(v_float, &v_char, &v_int, &v_double);
	}
	else if (is_number(str) == 3)
	{
		v_double = to_double(str, &flag_int);
		if (v_double > 2147483647.0 || v_double < -2147483648.0)
			flag_double = -1;
		double_convert(v_double, &v_char, &v_int, &v_float);
	}
	else
	{
		if(is_pseudo(str) == 1)
		{
			std::cout << "Char   : Impossible" << std::endl;
			std::cout << "Int    : Impossible" << std::endl;
			std::cout << "Float  : " << str << "f" << std::endl;
			std::cout << "Double : " << str << std::endl;
			exit(0);
		}
		else if(is_pseudo(str) == 2)
		{
			std::cout << "Char   : Impossible" << std::endl;
			std::cout << "Int    : Impossible" << std::endl;
			std::cout << "Float  : " << str << std::endl;
			str.erase(str.length() - 1);
			std::cout << "Double : " << str << std::endl;
			exit(0);
		}
		else if (is_char(str))
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
	
	if (v_int < 32 || v_int > 127)
		std::cout << "Char   : Non displayable" << std::endl;
	else
		std::cout << "Char   : '" << v_char << "'" << std::endl;

	if (flag_int == -1)
	{
		std::cout << "Int    : out of range" << std::endl;
		std::cout << "Float  : out of range" << std::endl;
		std::cout << "Double : out of range" << std::endl;
		exit(0);
	}
	if (flag_double == -1)
		std::cout << "Int    : out of range" << std::endl;
	else
		std::cout << "Int    : " << v_int << std::endl;
	std::cout << "Float  : " << std::fixed<<std::setprecision(1) << v_float << "f" << std::endl;
	std::cout << "Double : " << std::fixed<<std::setprecision(1) << v_double << std::endl;
			
}

int		ScalarConverter::ft_atoi(std::string str, int *flag)
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
		*flag = -1;
	}
	return ((int)res);
}

float	ScalarConverter::to_float(std::string str, int *flag)
{
	std::stringstream ss(str);
	float value;
	if (!(ss >> value))
		*flag = -1;
	return (value);
}

double	ScalarConverter::to_double(std::string str,int *flag)
{
	std::stringstream ss(str);
	double value;
	if (!(ss >> value))
	{
		*flag = -1;
	}
	return (value);
}

char 	ScalarConverter::to_char(std::string str)
{
	std::stringstream ss(str);
	char value;
	if (!(ss >> value))
		value = '\0';
	return (value);
}

int		ScalarConverter::is_number(std::string value)
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

void	ScalarConverter::float_convert(float value, char *v_char, int *v_int, double *v_double)
{
	*v_double = static_cast<double> (value);
	*v_int = static_cast<int> (value);
	*v_char = static_cast<char> (value);
}

void	ScalarConverter::double_convert(double value, char *v_char, int *v_int, float *v_float)
{
	*v_float = static_cast<float> (value);
	*v_int = static_cast<int> (value);
	*v_char = static_cast<char> (value);
}

void	ScalarConverter::char_convert(char value, double *v_double, int *v_int, float *v_float)
{
	*v_float = static_cast<float> (value);
	*v_int = static_cast<int> (value);
	*v_double = static_cast<double> (value);
}

void	ScalarConverter::int_convert(int value, double *v_double, char *v_char, float *v_float)
{
	*v_float = static_cast<float> (value);
	*v_char = static_cast<char> (value);
	*v_double = static_cast<double> (value);
}

int 	ScalarConverter::is_char(std::string value)
{
	if (isalpha(value[0]) && value[1] == '\0')
		return (1);
	return (0);
}

int 	ScalarConverter::is_pseudo(std::string value)
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