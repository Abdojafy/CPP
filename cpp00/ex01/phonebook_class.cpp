/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:59:40 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/09 19:35:39 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"phonebook_class.hpp"
#include"contact_class.hpp"

void	phonebook_class::add_phonebook(contact_class c, int i)
{
	contact[i] = c;
}

contact_class	phonebook_class::get_contact(int i)
{
	return(contact[i]);
}