/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:35:26 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/28 16:46:28 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string _type)
{
	brain = new Brain();
	type = _type;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	type = obj.type;
	brain = obj.brain;
	std::cout << "Cat Copy assignement operator called" << std::endl;
	return (*this);
}

Cat::Cat(const Cat& obj)
{
	*this = obj;
	this->brain = new Brain();
	*this->brain = *obj.brain;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (brain);
}

void	Cat::setBrain(Brain* _brain)
{
	brain = _brain;
}

void	Cat::makeSound() const
{
	std::cout << type << " make sound called !" << std::endl;
}
