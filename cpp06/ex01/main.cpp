/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:01:47 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/28 00:46:20 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"


int main()
{
    uintptr_t ptr = 0;
    Data *d = new Data();
	Data *d1;

    d->x = 5;
    d->y =  15;
    std::cout << "ptr = " << ptr << std::endl;
    std::cout << "adress of data is " << d << std::endl;
	std::cout << "|----------------------------|" << std::endl;
	std::cout << "| Convert adress data to ptr |" << std::endl;
	std::cout << "|----------------------------|" << std::endl;
   
    ptr = (Serializer::serialize(d));
    std::cout << "ptr = " << ptr << std::endl;
    std::cout << "adress of data is " << d << std::endl;
	std::cout << "|----------------------------|" << std::endl;
	std::cout << "| Convert ptr to data adress |" << std::endl;
	std::cout << "|----------------------------|" << std::endl;
   
    d1 = Serializer::deserialize(ptr);
    std::cout << "adress of data is " << d << std::endl;
    std::cout << "data x = " << d1->x << std::endl;
    std::cout << "data y = " << d1->y << std::endl;
	delete d;
	return 0;
}