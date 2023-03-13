/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:23:22 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 19:59:04 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
private:
	std::string name;
	Weapon& weapon;
public:
	HumanA(std::string _name, Weapon& _weapon);
	~HumanA();
	void	attack();
	Weapon getWeapon();
};


#endif