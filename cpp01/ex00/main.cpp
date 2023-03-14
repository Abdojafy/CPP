/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:37 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/14 15:34:21 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int	main(void)
{
	Zombie foo;
	Zombie *roo = NULL;
	
	foo.randomChump("zombie1");
	roo = roo->newZombie("zombie2");
	roo->announce();
	// delete(roo);
}