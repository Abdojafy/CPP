/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:51:36 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:41:26 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character(std::string _name):name(_name)
{
	std::cout << "Character Constructor called !" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called !" << std::endl;
}

Character::Character(const Character& obj)
{
	if (this != &obj)
	{
		if (this->name != obj.name)
		{
			*this = obj;
		}
	}
}

Character& Character::operator=(const Character& obj)
{
	Character *temp = this;
	if (this != &obj)
	{
		if (this->getName() != obj.getName())
		{
			delete this;
			temp = new Character(obj.getName());
		}
	}
	return (*temp);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (materia[i] && i < 4)
		i++;
	if (i < 4)
		materia[i] = m;
	else
		std::cout << "Too many materia !" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		int i = 0;
		while (i < 5 && umateria[i])
			i++;
		if (i < 5)
		{
			umateria[i] = materia[idx];
			materia[idx] = NULL;
		}
	}
	else
	{
		std::cout << "Materia introuvable !" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0)
		materia[idx]->use(target);
}
