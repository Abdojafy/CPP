/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:33:21 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:28:58 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1= Bureaucrat("hamid", 10);
		Form f1 = Form("myForm", 60, 15);
		std::cout<< b1 << std::endl;
		std::cout<< "******************" << std::endl;
		b1.signForm(f1);
		b1.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
