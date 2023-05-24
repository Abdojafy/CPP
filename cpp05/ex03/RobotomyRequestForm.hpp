/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:31:53 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 02:46:10 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& ob);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    RobotomyRequestForm(std::string target);
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