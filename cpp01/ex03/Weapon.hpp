/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:23:10 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 19:16:42 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	const std::string& getType();
	void	setType(std::string _type);
};

#endif