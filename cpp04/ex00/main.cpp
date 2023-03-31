/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:04:53 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/30 16:02:23 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"


int main()
{
	//test 1
	std::cout << "********* Test 1 *************" <<std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	 Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->setType("oussama's cat");
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);
	
	//test 2
	std::cout << "********* Test 2 *************" <<std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	wrong->makeSound(); 
	wrongcat->makeSound();
	delete(wrong);
	delete(wrongcat);
	
	//test 3
	std::cout << "********* Test 3 *************" <<std::endl;
	const WrongAnimal* wrong1 = new WrongAnimal();
	const WrongCat* wrongcat1 = new WrongCat();
	std::cout << wrong1->getType() << " " << std::endl;
	std::cout << wrongcat1->getType() << " " << std::endl;
	wrong1->makeSound(); 
	wrongcat1->makeSound();
	delete(wrong1);
	delete(wrongcat1);
	
	return 0;
}
