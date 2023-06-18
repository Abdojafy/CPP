/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:34 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/14 14:35:35 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"RPN.hpp"
int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			return (std::cout << "Erreur : Veuillez entrer un seul argument" << std::endl, 1);
		RPN r(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}