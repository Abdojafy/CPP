/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:04:53 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/30 16:03:23 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->Animal::getType() << " " << std::endl;
	std::cout << i->Animal::getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	WrongAnimal *wc = new WrongCat();
	std::cout << wc->WrongAnimal::getType() << " " << std::endl;
	wc->makeSound();
	Dog basic;
	{
		Dog tmp = basic;
	}
	Animal *an[10];
	for(int i = 0; i < 5 ; i++)
	{
		an[i] = new Dog();
	}
	for(int i = 5; i < 10 ; i++)
	{
		an[i] = new Cat();
	}
	delete wc;
	delete i;
	delete j;
	delete meta;
	for (int i = 0; i < 10; i++)
	{
		delete an[i];
	}
	return (0);
}