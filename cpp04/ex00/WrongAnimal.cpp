/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:01:14 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 20:24:50 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
{
	type = _type;
	std::cout << "WrongAnimal constructor called" << std::endl;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.type;
	std::cout << "WrongAnimal Copy assignement operator called" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::setType(std::string _type)
{
	type = _type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " make sound called !" << std::endl;
}
