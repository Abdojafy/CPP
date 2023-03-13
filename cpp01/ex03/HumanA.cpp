/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:23:25 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 20:03:57 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

Weapon HumanA::getWeapon()
{
	return(weapon);
}

HumanA::HumanA(std::string _name, Weapon& _weapon):weapon(_weapon)
{
	name = _name;
}

HumanA::~HumanA()
{
}