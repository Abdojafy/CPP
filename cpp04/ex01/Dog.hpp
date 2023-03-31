/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:17:32 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/27 15:59:01 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(std::string _type);
	~Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	void	makeSound() const;
	Brain* getBrain() const;
	void	setBrain(Brain* _brain);
};

#endif