/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:25:54 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/30 16:15:22 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include<iostream>
#include<string>
#include"AMateria.hpp"
#include"IMateriaSource.hpp"

class AMateria;
class MateriaSource : public IMateriaSource
{
private:
	AMateria*	smateria[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& obj);
	void learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
};
#endif