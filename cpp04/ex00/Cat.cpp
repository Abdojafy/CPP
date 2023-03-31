/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:35:26 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 20:25:21 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string _type)
{
	type = _type;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	std::cout << "Cat Copy assignement operator called" << std::endl;
	return (*this);
}

Cat::Cat(const Cat& obj)
{
	*this = obj;
	std::cout << "Cat Copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << type << " make sound called !" << std::endl;
}
