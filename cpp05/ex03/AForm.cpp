/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 22:43:02 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/15 02:52:15 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

AForm::AForm():name(""),grade_execute(150), grade_sign(150)
{
	this->sign = false;
}

AForm::AForm(std::string _name, int _grade_execute, int _grade_sign):name(_name), grade_execute(_grade_execute), grade_sign(_grade_sign)
{
	if (this->grade_execute < 1 || this->grade_sign < 1)
	{
		AForm::GradeTooHighException ex;
		throw  ex;
	}
	if (this->grade_execute > 150 || this->grade_sign > 150)
	{
		AForm::GradeTooLowException ex;
		throw  ex;
	}
}

AForm& AForm::operator=(const AForm& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

AForm::AForm(const AForm& obj):name(obj.name), grade_execute(obj.grade_execute), grade_sign(obj.grade_sign)
{
	if (this->grade_execute > 150 || this->grade_sign > 150)
	{
		AForm::GradeTooLowException ex;
		throw ex;
	}
	else if (this->grade_execute < 1 || this->grade_sign < 1)
	{
		AForm::GradeTooHighException ex;
		throw ex;
	}
}

AForm::~AForm()
{
	// std::cout << "AForm Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << obj.getName() << ", AForm grade " << obj.getGradeExecute() ;
	return (os);
}

std::string AForm::getName() const
{
	return (name);
}

bool AForm::getSign() const
{
	return(sign);
}

int AForm::getGradeSign() const
{
	return (grade_sign);
}
int AForm::getGradeExecute() const
{
	return (grade_execute);
}

void AForm::beSigned(Bureaucrat &obj)
{
	try
	{
		if (obj.getGrade() > grade_sign)
		{
			AForm::GradeTooLowException ex;
			throw  ex;	
		}
		else if (sign)
		{
			AForm::FormSignedException ex;
			throw  ex;
		}
		else
		{
			sign = true;
			std::cout << obj.getName() << " sign " << this->name << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
