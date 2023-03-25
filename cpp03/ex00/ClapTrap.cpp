/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:12 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/25 15:15:29 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
	name = _name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
   name = obj.name;
   energy_points = obj.energy_points;
   hit_points = obj.hit_points;
   attack_damage = obj.attack_damage;
   std::cout << "ClapTrap Copy constructor called !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "ClapTrap " + name + " can't attacks " + target << std::endl;
	}
	else
	{
		energy_points--;
		std::cout << "ClapTrap " + name + " attacks " + target + ", causing " << attack_damage << " points of damage !" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " + name + " is died !" << std::endl;
		return ;
	}
	if (hit_points <= amount)
	{
		hit_points = 0;
	}
	else
		hit_points -= amount;
	std::cout << "ClapTrap " + name + " take " << amount << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "ClapTrap " + name + "can't be repaired" << std::endl;
	}
	else
	{
		hit_points += amount;
		energy_points--;
		std::cout << "ClapTrap " + name + " repairs by " << amount << " points" << std::endl;
	}
}

std::string  ClapTrap::get_name()
{
	return (name);
}

unsigned int ClapTrap::get_attack_damage()
{
	return(attack_damage);
}

unsigned int ClapTrap::get_energy_points()
{
	return(energy_points);
}

unsigned int ClapTrap::get_hit_points()
{
	return(hit_points);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	name = obj.name;
	attack_damage = obj.attack_damage;
	hit_points = obj.hit_points;
	energy_points = obj.energy_points;
	return (*this);
}

void    ClapTrap::status()
{
	if ((this->get_energy_points() <= 0) || (this->get_hit_points() <= 0))
		std::cout << "ClapTrap " << this->get_name() << " is died !" << std::endl;
    else
		std::cout << "ClapTrap " << this->get_name() << " has " << this->get_energy_points() << " energy point and " << this->get_hit_points() << " hit points" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}