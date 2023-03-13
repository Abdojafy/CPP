/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:37:20 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 02:42:10 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<sstream>

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].name = name;
	}
	return (zombie);
}

Zombie* Zombie::zombieHorde_( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << i;
		zombie[i].name = name + ss.str();
	}
	return (zombie);
}
