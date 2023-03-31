/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:17:32 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 20:06:10 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(std::string _type);
	~Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	void	makeSound() const;
};

#endif