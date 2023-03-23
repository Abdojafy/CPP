/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:12 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/23 01:39:40 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	std::cout << "Constructor called" << std::endl;

}


void ClapTrap::attack(const std::string& target)
{
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}



ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}