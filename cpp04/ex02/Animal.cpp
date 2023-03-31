/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:32:29 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 21:36:07 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string _type)
{
	type = _type;
	std::cout << "Animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	std::cout << "Animal Copy assignement operator called" << std::endl;
	return (*this);
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void	Animal::setType(std::string _type)
{
	type = _type;
}

void	Animal::makeSound() const
{
	std::cout << type << " make sound called !" << std::endl;
}
