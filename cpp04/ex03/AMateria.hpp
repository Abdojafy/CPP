/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:09:11 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/30 15:53:18 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include<string>
#include"ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& obj);
	std::string const & getType() const; 
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif