/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 22:43:02 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 03:54:24 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form():name(""),grade_execute(150), grade_sign(150)
{
	this->sign = false;
}

Form::Form(std::string _name, int _grade_execute, int _grade_sign):name(_name), grade_execute(_grade_execute), grade_sign(_grade_sign)
{
	if (this->grade_sign < 1)
	{
		Form::GradeTooHighException ex;
		throw  ex;
	}

	if (this->grade_sign > 150)
	{
		Form::GradeTooLowException ex;
		throw  ex;
	}
}

Form& Form::operator=(const Form& obj)
{
	Form *o;

	if (this->grade_sign > 150)
	{
		Form::GradeTooLowException ex;
		throw ex;
	}
	else if (this->grade_sign < 1)
	{
		Form::GradeTooHighException ex;
		throw ex;
	}
	o = new Form(obj.name, obj.grade_execute, obj.grade_sign);
	return (*o);
}

Form::Form(const Form& obj):name(obj.name), grade_execute(obj.grade_execute), grade_sign(obj.grade_sign)
{
	if (this->grade_sign > 150)
	{
		Form::GradeTooLowException ex;
		throw ex;
	}
	else if (this->grade_sign < 1)
	{
		Form::GradeTooHighException ex;
		throw ex;
	}
}

Form::~Form()
{
	// std::cout << "Form Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << ", Form grade " << obj.getGradeExecute() ;
	return (os);
}

std::string Form::getName() const
{
	return (name);
}

bool Form::getSign() const
{
	return(sign);
}

int Form::getGradeSign() const
{
	return (grade_sign);
}
int Form::getGradeExecute() const
{
	return (grade_execute);
}

void Form::beSigned(Bureaucrat &obj)
{
	try
	{
		if (obj.getGrade() > grade_sign)
		{
			Form::GradeTooLowException ex;
			throw  ex;	
		}
		else if (sign)
		{
			Form::FormSignedException ex;
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
