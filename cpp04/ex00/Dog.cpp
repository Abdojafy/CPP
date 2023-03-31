/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:32:45 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/28 17:42:52 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string _type)
{
	type = _type;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	std::cout << "Dog Copy assignement operator called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog& obj)
{
	*this = obj;
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog make sound called !" << std::endl;
}
