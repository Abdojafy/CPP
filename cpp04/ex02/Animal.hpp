/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:33:05 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/28 17:00:56 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string _type);
	virtual ~Animal();
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);
	std::string getType() const;
	void	setType(std::string _type);
	virtual void	makeSound() const = 0;
};

#endif