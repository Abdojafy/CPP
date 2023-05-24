/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:33:21 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:42:19 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Intern.hpp"
#include"AForm.hpp"

int main()
{
	try
	{
		Bureaucrat b1= Bureaucrat("hamid", 15);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		if (rrf)
		{
			b1.executeForm(*rrf);
			std::cout<< "******************" << std::endl;
			b1.signForm(*rrf);
			std::cout<< "******************" << std::endl;
			b1.signForm(*rrf);
			std::cout<< "******************" << std::endl;
			b1.executeForm(*rrf);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
