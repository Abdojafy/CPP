/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:38:17 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:27:43 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("")
{
	this->grade = 3;
	// std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade):name(_name), grade(_grade)
{
	if (this->grade < 1)
	{
		Bureaucrat::GradeTooHighException ex;
		throw  ex;
	}
	if (this->grade > 150)
	{
		Bureaucrat::GradeTooLowException ex;
		throw  ex;
	}
	// std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	Bureaucrat *o;
	
	if (this->grade > 150)
	{
		Bureaucrat::GradeTooLowException ex;
		throw ex;
	}
	else if (this->grade < 1)
	{
		Bureaucrat::GradeTooHighException ex;
		throw ex;
	}
	o = new Bureaucrat(obj.name, obj.grade);
	// std::cout << "Bureaucrat Copy assignement operator called" << std::endl;
	return (*o);
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):name(obj.name), grade(obj.grade)
{
	
	if (this->grade > 150)
	{
		Bureaucrat::GradeTooLowException ex;
		throw ex;
	}
	else if (this->grade < 1)
	{
		Bureaucrat::GradeTooHighException ex;
		throw ex;
	}
	// std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() ;
	return (os);
}

void Bureaucrat::increment()
{
	if (this->grade < 2)
	{
		Bureaucrat::GradeTooHighException ex;
		throw  ex;	
	}
	this->setGrade(this->grade - 1);
}

void Bureaucrat::decrement()
{
	if (this->grade > 149)
	{
		Bureaucrat::GradeTooLowException ex;
		throw  ex;	
	}
	this->setGrade(this->grade + 1);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::setGrade(int new_grade)
{
	this->grade = new_grade;
}

