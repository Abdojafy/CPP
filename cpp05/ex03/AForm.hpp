/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 22:43:26 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 02:46:27 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include<string>
#include"Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
	const std::string name;
	bool sign;
	const int grade_execute;
	const int grade_sign;
public:
	AForm();
	AForm(std::string _name, int _grade_execute, int _grade_sign);
	virtual ~AForm();
	AForm(const AForm& obj);
	AForm& operator=(const AForm& obj);
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
	virtual void execute(Bureaucrat const& obj) const = 0;
	virtual AForm* clonedata(std::string const& target) = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
#endif
