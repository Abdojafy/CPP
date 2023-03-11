/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:45:30 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/09 19:36:27 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"contact_class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

class phonebook_class
{
	private:
		contact_class contact[8];
	public:
		void	add_phonebook(contact_class contact, int i);
		contact_class	get_contact(int i);
};

#endif