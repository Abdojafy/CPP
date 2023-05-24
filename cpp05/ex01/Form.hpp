/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 22:43:26 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/16 02:25:57 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include<string>
#include"Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string name;
	bool sign;
	const int grade_execute;
	const int grade_sign;
public:
	Form();
	Form(std::string _name, int _grade_execute, int _grade_sign);
	~Form();
	Form(const Form& obj);
	Form& operator=(const Form& obj);
	std::string getName() const;
	bool getSign() const;
	int getGradeExecute() const;
	int getGradeSign() const;
	void beSigned(Bureaucrat &obj);
	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("The Grade is too High");
		};
	};
	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("The Grade is too Low");
		};
	};
	class FormSignedException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("already signed");
		};
	};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
#endif
