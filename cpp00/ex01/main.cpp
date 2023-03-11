/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:45:28 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/11 04:39:19 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_class.hpp"
#include "contact_class.hpp"
#include <iostream>
#include<string>
#include<algorithm>
#include <stdlib.h> 

void	ft_exit(int	i)
{
	exit(i);
}

int	ft_check_spaces(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			break ;
		i++;
	}
	if (str[i] == '\0')
		return (0);
	return (1);
}

void	ft_add(phonebook_class& phonebook, int& i)
{
	contact_class contact;
	char *pointer_end;

	std::string buffer;
	while(buffer.empty() || !ft_check_spaces(buffer))
	{
		std::cout << "First name : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
	}
	contact.set_fn(buffer);
	buffer = "";

	while(buffer.empty() || !ft_check_spaces(buffer))
	{
		std::cout << "Last name : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
	}
	contact.set_ln(buffer);
	buffer = "";
	
	while(buffer.empty() || !ft_check_spaces(buffer))
	{
		std::cout << "Nick name : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
	}
	contact.set_nn(buffer);
	buffer = "";
	
	while(buffer.empty() || !ft_check_spaces(buffer) || *pointer_end)
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
		strtol(buffer.c_str(), &pointer_end, 10);
	}
	contact.set_pn(buffer);
	buffer = "";

	while(buffer.empty() || !ft_check_spaces(buffer))
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
	}
	contact.set_ds(buffer);
	buffer = "";
	
	contact.set_id(i % 8);
	phonebook.add_phonebook(contact, (i % 8));
	i++;
}
void	print_columns()
{
	for(int i = 0; i < 4; i++)
	{
		std::cout << "|----------";
	}
	std::cout << "|" << std::endl;
	
	std::cout << "|     Index";
	std::cout << "|First name";
	std::cout << "| Last name";
	std::cout << "| Nick name";
	std::cout << "|" << std::endl;
	
	for(int i = 0; i < 4; i++)	
	{
		std::cout << "|----------";
	}
	std::cout << "|" << std::endl;
}

std::string	align_text(std::string str)
{
	if (str.length() < 10)
	{
		str.insert(0, (10 - str.length()), ' ');
	}
	else if (str.length() > 10)
	{
		str.insert(9, 1, '.');
		str = str.substr(0, 10);
	}
	return (str);
}

void	display_contact(phonebook_class phonebook, int index)
{
	contact_class c;
	
	c = phonebook.get_contact(index);
	std::cout << std::endl << "	Index          : ";
	std::cout << c.get_id() << std::endl;
	std::cout << "	First name     : ";
	std::cout << c.get_fn() << std::endl;
	std::cout << "	Last name      : ";
	std::cout << c.get_ln() << std::endl;
	std::cout << "	Nick name      : ";
	std::cout << c.get_nn() << std::endl;
	std::cout << "	Phone number   : ";
	std::cout << c.get_pn() << std::endl;
	std::cout << "	Darkest secret : ";
	std::cout << c.get_ds() << std::endl << std::endl;
}

void	display_all(phonebook_class phonebook, int len)
{
	std::string str;
	contact_class c;
	
	print_columns();
	for(int j = 0; j < std::min(8, len); j++)
	{
		c = phonebook.get_contact(j);
		std::cout << "|         ";
		std::cout << c.get_id();
		str = align_text(c.get_fn());
		std::cout << "|" + str;
		str = align_text(c.get_ln());
		std::cout << "|" + str;
		str = align_text(c.get_nn());
		std::cout << "|" + str;
		std::cout << "|"  << std::endl;
		for(int k = 0; k < 4; k++)
		{
			std::cout << "|----------";
		}
		std::cout << "|" << std::endl;
	}
}

void	ft_search(phonebook_class phonebook, int i)
{
	std::string buffer;
	long int index;
	char *pointer_end;

	display_all(phonebook, i);
	while (buffer.empty())
	{
		std::cout << "Enter an index to display or (R) to return : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
		index = strtol(buffer.c_str(), &pointer_end, 10);
		if (*pointer_end || index >= std::min(8, i) || index < 0)
		{
			if (!buffer.compare("R"))
				return ;
			if (i == 0)
			{
				std::cout << "Phonebook empty !"<< std::endl;
				return ;
			}
			else
			{
				std::cout << "Index invalide !"<< std::endl;
				buffer = "";
			}
		}
	}
	display_contact(phonebook, (int)index);
}

int	main()
{
	phonebook_class phonebook;
	int	i = 0;

	while (1)
	{
		std::string buffer;
		std::cout << "Enter a command : ";
		std::getline(std::cin, buffer);
		if(std::cin.fail())
			ft_exit(1);
		if (!buffer.compare("ADD"))
			ft_add(phonebook, i);
		else if (!buffer.compare("SEARCH"))
			ft_search(phonebook, i);
		else if (!buffer.compare("EXIT"))
			ft_exit(0);
	}
}