/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:53 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/15 10:38:02 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef RPN_HPP
#define RPN_HPP

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<stack>
#include<cstdlib>
#include<fstream>
#include <sstream>
#include <ctime>

class RPN
{
private:
	std::stack<int> stack;
	std::string		arg;
public:
	RPN();
	RPN(std::string arg);
	RPN(const RPN& obj);
	RPN& operator=(const RPN& obj);
	~RPN();
	
	void	rpn(std::string arg);
	void	operation(char token);
	void	erase_white_spaces(std::string &line);
};

#endif