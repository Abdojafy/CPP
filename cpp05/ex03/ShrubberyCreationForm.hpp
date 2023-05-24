/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:34:25 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 02:46:21 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include"AForm.hpp"
#include<fstream>

class ShrubberyCreationForm: public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& ob);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(std::string target, std::string name);
	std::string getTarget(void) const;
    void execute(Bureaucrat const& obj)const ;
	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("The Grade is too Low");
		};
	};
	AForm* clonedata(std::string const& target);

};

#endif