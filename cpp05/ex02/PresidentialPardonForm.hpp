/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:31:50 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/20 01:18:45 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include"AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& ob);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(std::string target, std::string name);
	std::string getTarget(void) const;
    void execute(Bureaucrat const& obj)const ;
    class GradeTooLowException:public std::exception
	{
		public:
		virtual const char * what() const throw(){
			return ("The Grade is too Low");
		};
	};
};

#endif