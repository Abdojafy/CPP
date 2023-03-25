/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:10 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/24 21:11:11 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class ClapTrap
{
private:
	std::string 	name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &obj);
	~ClapTrap();
    std::string get_name();
	unsigned int get_attack_damage();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap& operator=(const ClapTrap& obj);
};

#endif