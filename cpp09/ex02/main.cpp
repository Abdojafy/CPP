/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:28:46 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/15 15:00:25 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PmergeMe.hpp"
int main(int ac, char **av)
{
	try
	{
		if (ac > 1)
			PmergeMe r(&av[1]);
		else
			return (std::cout << "Erreur : Veuillez entrer des arguments !" << std::endl, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}