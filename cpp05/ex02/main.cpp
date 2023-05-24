/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:33:21 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:46:42 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b1= Bureaucrat("hamid", 5);
		
		ShrubberyCreationForm f1 = ShrubberyCreationForm("Home");
		PresidentialPardonForm f2 = PresidentialPardonForm("Youssef");
		RobotomyRequestForm f3 = RobotomyRequestForm("Oussama");
		std::cout<< b1 << std::endl;
		b1.executeForm(f2);
		std::cout<< "******************" << std::endl;
		b1.signForm(f2);
		std::cout<< "******************" << std::endl;
		b1.signForm(f2);
		std::cout<< "******************" << std::endl;
		b1.executeForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
