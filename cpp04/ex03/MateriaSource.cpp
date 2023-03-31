/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:52:33 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/30 15:41:13 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < 4)
		smateria[i++] = NULL;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (i < 4)
		delete  this->smateria[i++];
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	*this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	MateriaSource *temp = this;
	if (this != &obj)
	{
		*this = obj;
		delete this;
		temp = new MateriaSource(obj);
	}
	return (*temp);
}

void MateriaSource::learnMateria(AMateria* mat)
{
	int i = 0;
	while (i < 4 && smateria[i])
		i++;
	if (i < 4)
		smateria[i] = mat;
	else
		std::cout << "Can't store this materia !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < 4)
	{
		if (smateria[i]->getType() == type)
		{
			return (smateria[i]);
		}
		i++;
	}
	return (0);
}
