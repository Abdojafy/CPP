/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:23:13 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 20:17:26 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

const std::string& Weapon::getType()
{
	const std::string& ref = type;
	return (ref);
}

void	Weapon::setType(std::string _type)
{	
	type = _type;
}

Weapon::Weapon()
{
}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon()
{
}
