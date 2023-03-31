/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:32:45 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/28 16:46:41 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string _type)
{
	brain = new Brain();
	type = _type;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete(brain);
}

Dog& Dog::operator=(const Dog& obj)
{
	type = obj.type;
	brain = obj.brain;
	std::cout << "Dog Copy assignement operator called" << std::endl;
	return (*this);
}
Dog::Dog(const Dog& obj)
{
	*this = obj;
	this->brain = new Brain();
	*this->brain = *obj.brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (brain);
}

void	Dog::setBrain(Brain* _brain)
{
	brain = _brain;
}
void	Dog::makeSound() const
{
	std::cout << type << " make sound called !" << std::endl;
}
