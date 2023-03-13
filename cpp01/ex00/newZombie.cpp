/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:40 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 00:28:52 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie( std::string n )
{
	name = n;
}

Zombie* Zombie::newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}