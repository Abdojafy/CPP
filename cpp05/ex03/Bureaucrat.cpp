/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:38:17 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:14:16 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("")
{
	this->grade = 3;
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
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << std::to_string(obj.getGrade()) ;
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

void Bureaucrat::signForm(AForm &f)
{
	if (!f.getSign() && grade > 0 && grade < 151)
	{
		f.beSigned(*this);
	}
	else
	{
		std::cout << this->name << " could'nt sign " << f.getName() << " because ";
		f.beSigned(*this);
	}
}

void Bureaucrat::executeForm(AForm const & aform)
{
	try
	{
		aform.execute(*this);
		std::cout << this->getName() << " executed " << aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " can't execut " << aform.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}
