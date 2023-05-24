/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:31:48 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:45:49 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 5, 25)
{
	target = "Target";
}
	
PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):AForm("PresidentialPardonForm", 5, 25)
{
	this->target = obj.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target):AForm("PresidentialPardonForm", 5, 25)
{
	target = _target;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return(target);
}

void PresidentialPardonForm::execute(Bureaucrat const& obj)const 
{
	if (this->getSign() && this->getGradeExecute() >= obj.getGrade())
	{
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else if(!this->getSign())
	{
		throw std::invalid_argument("is not signed");
	}
	else
	{
		Bureaucrat::GradeTooLowException ex;
		throw ex;
	}
}
