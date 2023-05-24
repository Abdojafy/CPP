/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:33:21 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:26:09 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1= Bureaucrat("hamid", 150);
		Bureaucrat b2 = Bureaucrat("jafy", 1);
		std::cout<< "******************" << std::endl;
		std::cout<< b1 << std::endl;
		std::cout<< b2 << std::endl;
		std::cout<< "******************"<< std::endl;
		b1.setGrade(10);
		b2.setGrade(150);
		std::cout<< b1 << std::endl;
		std::cout<< b2 << std::endl;
		std::cout<< "******************"<< std::endl;
		b1.setGrade(150);
		b2.setGrade(151);
		std::cout<< b1 << std::endl;
		std::cout<< b2 << std::endl;
		std::cout<< "******************"<< std::endl;
		b1.increment();
		b2.decrement();
		std::cout<< b1 << std::endl;
		std::cout<< b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
