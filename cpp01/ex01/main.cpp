/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:37:12 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 02:39:34 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
	Zombie *tab = NULL;
	int	N = 10;
	
	tab = tab->zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		tab[i].announce();
	std::cout << "*-----------------------------*" << std::endl;
	delete [] tab;
}