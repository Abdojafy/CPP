/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:31:56 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:45:56 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 45, 72)
{
	target = "Target";
}
	
RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):AForm("RobotomyRequestForm", 45, 72)
{
	this->target = obj.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target):AForm("RobotomyRequestForm", 45, 72)
{
	target = _target;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return(target);
}

void RobotomyRequestForm::execute(Bureaucrat const& obj)const 
{
	if (this->getSign() && this->getGradeExecute() >= obj.getGrade())
	{
		srand(time(0));
		int	random = rand();
		if (random % 2 == 0)
			std::cout << this->target << " has been robotomized" << std::endl;
		else
			std::cout << this->target << " robotomy failed" << std::endl;
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
