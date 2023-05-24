/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:35:13 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 04:46:03 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 137, 145)
{
	target = "Target";
}
	
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):AForm("ShrubberyCreationForm", 137, 145)
{
	this->target = obj.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):AForm("ShrubberyCreationForm", 137, 145)
{
	target = _target;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return(target);
}


void ShrubberyCreationForm::execute(Bureaucrat const& obj)const 
{
	if (this->getSign() && this->getGradeExecute() >= obj.getGrade())
	{
		std::ofstream file(this->target + "_shrubbery");
		if (file.is_open())
		{
			file << "                                                         .\n"
					"                                              .         ;  \n"
					"                 .              .              ;%     ;;   \n"
					"                   ,           ,                :;%  %;   \n"
					"                    :         ;                   :;%;'     .,   \n"
					"           ,.        %;     %;            ;        %;'    ,;\n"
					"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
					"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
					"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
					"                `%;.     ;%;     %;'         `;%%;.%;'\n"
					"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
					"                    `:%;.  :;bd%;          %;@%;'\n"
					"                      `@%:.  :;%.         ;@@%;'   \n"
					"                        `@%.  `;@%.      ;@@%;         \n"
					"                          `@%%. `@%%    ;@@%;        \n"
					"                            ;@%. :@%%  %@@%;       \n"
					"                              %@bd%%%bd%%:;     \n"
					"                                #@%%%%%:;;\n"
					"                                %@@%%%::;\n"
					"                                %@@@%(o);  . '         \n"
					"                                %@@@o%;:(.,'         \n"
					"                            `.. %@@@o%::;         \n"
					"                               `)@@@o%::;         \n"
					"                                %@@(o)::;        \n"
					"                               .%@@@@%::;         \n"
					"                               ;%@@@@%::;.          \n"
					"                              ;%@@@@%%:;;;. \n"
					"                          ...;%@@@@@%%:;;;;,..";
		}
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



