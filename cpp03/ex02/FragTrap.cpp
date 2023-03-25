/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:22:18 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/25 11:22:18 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"FragTrap.hpp"


FragTrap::FragTrap()
{
	name = "default";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
	name = _name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj):ClapTrap(obj.name)
{
   name = obj.name;
   energy_points = obj.energy_points;
   hit_points = obj.hit_points;
   attack_damage = obj.attack_damage;
   std::cout << "FragTrap Copy constructor called !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "FragTrap " + name + " can't attacks " + target << std::endl;
	}
	else
	{
		hit_points -= attack_damage;
		energy_points--;
		std::cout << "FragTrap " + name + " attacks " + target + ", causing " << attack_damage << " points of damage !" << std::endl;
	}
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	name = obj.name;
	attack_damage = obj.attack_damage;
	hit_points = obj.hit_points;
	energy_points = obj.energy_points;
	return (*this);
}

void highFivesGuys(void)
{
    std::cout << "High Five :)" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}