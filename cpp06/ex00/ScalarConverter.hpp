/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:01:54 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/28 00:52:16 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &obj);
	ScalarConverter& operator=(const ScalarConverter& obj);
	~ScalarConverter();
public:
	static void 		convert(std::string str);
	static	int			ft_atoi(std::string str, int *flag);
	static	float 		to_float(std::string str, int *flag);
	static	double 		to_double(std::string str, int *flag);
	static	char 		to_char(std::string str);
	static	int			is_number(std::string value);
	static	void		float_convert(float value, char *v_char, int *v_int, double *v_double);
	static	void		double_convert(double value, char *v_char, int *v_int, float *v_float);
	static	void		char_convert(char value, double *v_double, int *v_int, float *v_float);
	static	void		int_convert(int value, double *v_double, char *v_char, float *v_float);
	static	int 		is_char(std::string value);
	static	int 		is_pseudo(std::string value);

};
#endif