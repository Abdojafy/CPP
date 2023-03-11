/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:45:12 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/09 19:30:22 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"contact_class.hpp"

//seters
		void	contact_class::set_id(int id)
		{
			index = id;
		}
		void	contact_class::set_fn(std::string fn)
		{
			first_name = fn;
		}
		void	contact_class::set_ln(std::string ln)
		{
			last_name = ln;
		}
		void	contact_class::set_nn(std::string nn)
		{
			nick_name = nn;
		}
		void	contact_class::set_pn(std::string pn)
		{
			phone_number = pn;
		}
		void	contact_class::set_ds(std::string ds)
		{
			darkest_secret = ds;
		}
		
//geters
		int		contact_class::get_id()
		{
			return (index);
		}
		std::string	contact_class::get_fn()
		{
			return (first_name);
		}
		std::string	contact_class::get_ln()
		{
			return (last_name);
		}
		std::string	contact_class::get_nn()
		{
			return (nick_name);
		}
		std::string	contact_class::get_pn()
		{
			return (phone_number);
		}
		std::string	contact_class::get_ds()
		{
			return (darkest_secret);
		}