/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:23:19 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 20:12:34 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string _name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon& _weapon);
};

#endif