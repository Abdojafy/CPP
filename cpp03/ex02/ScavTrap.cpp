/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:27:59 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/24 21:27:59 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	name = "default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	name = _name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj):ClapTrap(obj.name)
{
   name = obj.name;
   energy_points = obj.energy_points;
   hit_points = obj.hit_points;
   attack_damage = obj.attack_damage;
   std::cout << "ScavTrap Copy constructor called !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "ScavTrap " + name + " can't attacks " + target << std::endl;
	}
	else
	{
		energy_points--;
		std::cout << "ScavTrap " + name + " attacks " + target + ", causing " << attack_damage << " points of damage !" << std::endl;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	name = obj.name;
	attack_damage = obj.attack_damage;
	hit_points = obj.hit_points;
	energy_points = obj.energy_points;
	return (*this);
}

void ScavTrap::guardGate()
{
	if ((this->get_energy_points() > 0) && (this->get_hit_points() > 0))
		std::cout << "ScavTrap " << this->get_name() << " now in Gatekeeper mode" << std::endl;
}

void    ScavTrap::status()
{
	if ((this->get_energy_points() <= 0) || (this->get_hit_points() <= 0))
		std::cout << "ScavTrap " << this->get_name() << " is died !" << std::endl;
    else
		std::cout << "ScavTrap " << this->get_name() << " has " << this->get_energy_points() << " energy point and " << this->get_hit_points() << " hit points" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}