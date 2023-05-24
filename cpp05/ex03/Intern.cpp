/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:59:17 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:43:30 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
	// std::cout << "Intern Default constructor called" <<std::endl;
	form[0] = new ShrubberyCreationForm("target");
	form[1] = new RobotomyRequestForm("target");
	form[2] = new PresidentialPardonForm("target");
}

Intern::~Intern()
{
	// std::cout << "Intern Destructor called" <<std::endl;
	delete form[0];
	delete form[1];
	delete form[2];
}

Intern::Intern(const Intern& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
}

Intern& Intern::operator=(const Intern& obj)
{
	(void) obj;
	return (*this);
}

AForm* Intern::makeForm(std::string nameForm, std::string target)
{
	int i = 0;
	while (i < 3 && nameForm != form[i]->getName())
		i++;
	if (i <= 2)
	{
		std::cout << "Intern creat " << nameForm << std::endl;
		return (form[i]->clonedata(target));
	}
	std::cout << "Intern can't creat " << nameForm << std::endl;
	return (NULL);
}
