/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:08:03 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:39:38 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include<iostream>
#include<string>
#include"ICharacter.hpp"


class Character : public ICharacter
{
	protected:
		std::string	const name;
		AMateria*	materia[4];
		AMateria*	umateria[5];
	public:
		Character(std::string _name);
		~Character();
		Character(const Character& obj);
		Character& operator=(const Character& obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};


#endif