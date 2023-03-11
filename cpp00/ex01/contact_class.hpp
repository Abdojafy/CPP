/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:45:24 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/09 19:30:16 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

class contact_class
{
	private:
		int	index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
//seters
		void	set_id(int id);
		void	set_fn(std::string fn);
		void	set_ln(std::string ln);
		void	set_nn(std::string nn);
		void	set_pn(std::string pn);
		void	set_ds(std::string ds);
		
//geters
		int			get_id();
		std::string	get_fn();
		std::string	get_ln();
		std::string	get_nn();
		std::string	get_pn();
		std::string	get_ds();
};

#endif