/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:34:57 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:38:45 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "Ice default constructor called !" << std::endl;
}

Ice::Ice(std::string const & type)
{
	this->type = type;
	std::cout << "Ice constructor called !" << std::endl;
}
	
Ice::~Ice()
{
	std::cout << "Ice destructor called !" << std::endl;
}

Ice::Ice(const Ice& obj)
{
	*this = obj;
	std::cout << "Ice copy constructor called !" << std::endl;
}

Ice& Ice::operator=(const Ice& obj)
{
	this->type = obj.type;
	std::cout << "Ice copy assignement operator called !" << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *new_ice = new Ice();
	return (new_ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
