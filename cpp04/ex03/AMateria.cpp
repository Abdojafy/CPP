/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:09:08 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:37:28 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria()
{
	type = "default";
	std::cout << "AMateria default constructor called !" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria constructor called !" << std::endl;
}
	
AMateria::~AMateria()
{
	std::cout << "AMateria destructor called !" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
	std::cout << "AMateria copy constructor called !" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	this->type = obj.type;
	std::cout << "AMateria copy assignement operator called !" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "use AMateria " << target.getName()<< std::endl;
}