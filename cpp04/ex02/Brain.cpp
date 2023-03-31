/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:12:30 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/28 16:26:20 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
	ideas[0] = "default idea";
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	ideas[0] = idea;
	std::cout << "Brain constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << "Brain Copy assignement operator called" << std::endl;
	return (*this);
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Brain Copy constructor called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}

void	Brain::setIdea(std::string _idea, int i)
{
	ideas[i] = _idea;
}
Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}