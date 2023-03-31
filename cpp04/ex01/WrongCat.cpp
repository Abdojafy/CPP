/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:01:10 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 20:25:06 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string _type)
{
	type = _type;
	std::cout << "WrongCat constructor called" << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}


WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type;
	std::cout << "WrongCat Copy assignement operator called" << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat& obj)
{
	*this = obj;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}


void	WrongCat::makeSound() const
{
	std::cout << type << " make sound called !" << std::endl;
}
