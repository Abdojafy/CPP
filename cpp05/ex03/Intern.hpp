/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:59:20 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 02:42:52 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include<iostream>
#include<string>
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class AForm;
class Intern
{
private:
	AForm *form[3];
public:
	Intern();
	~Intern();
	Intern(const Intern& obj);
	Intern& operator=(const Intern& obj);
	AForm* makeForm(std::string nameForm, std::string target);
};

#endif