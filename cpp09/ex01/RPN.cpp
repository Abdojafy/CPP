/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:49 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/15 10:58:03 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"RPN.hpp"

RPN::RPN()
{
	throw std::invalid_argument("Arguments !");
}

void RPN::erase_white_spaces(std::string &line)
{
	size_t first = 0;
	
	while (line[first] && std::isspace(line[first]))
		first++;
	line.erase(0, first);
	size_t last = line.length() - 1;
	while (last > 0)
	{
		if (std::isspace(line[last]))	
			line.erase(last, 1);
		last--;
	}
}

void	RPN::operation(char token)
{
	if (stack.size() < 2)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	double	second = stack.top();
	stack.pop();
	double	first = stack.top();
	stack.pop();
	if (token == '-')
		stack.push(first - second);
	else if (token == '+')
		stack.push(first + second);
	else if (token == '*')
		stack.push(first * second);
	else if (token == '/')
	{
		if (!second)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		stack.push(first / second);
	}
}

void	RPN::rpn(std::string arg)
{
	
	erase_white_spaces(arg);
	const char *str = arg.c_str();
	int i = 0;

	while (str[i])
	{
		if (std::isdigit(str[i]))
			stack.push(str[i] - 48);
		else
		{
			if (str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/')
				operation(str[i]);
			else
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
		}
		i++;
	}
	if (stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	std::cout << stack.top() << std::endl;
	stack.pop();
}

RPN::RPN(std::string arg)
{
	this->arg = arg;
	if (arg.empty())
		std::cout << "Error : Empty arguments" << std::endl;
	else
		rpn(arg);
}

RPN::RPN(const RPN& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
}

RPN& RPN::operator=(const RPN& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

RPN::~RPN()
{
}
