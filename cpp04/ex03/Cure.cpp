/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:35:09 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:39:10 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure()
{
	type = "cure";
	std::cout << "Cure default constructor called !" << std::endl;
}

Cure::Cure(std::string const & type)
{
	this->type = type;
	std::cout << "Cure constructor called !" << std::endl;
}
	
Cure::~Cure()
{
	std::cout << "Cure destructor called !" << std::endl;
}

Cure::Cure(const Cure& obj)
{
	*this = obj;
	std::cout << "Cure copy constructor called !" << std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
	this->type = obj.type;
	std::cout << "Cure copy assignement operator called !" << std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *new_cure = new Cure();
	return (new_cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}
