/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:47 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/11 23:35:38 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void	announce( void );
		Zombie* newZombie( std::string name );
		void 	randomChump( std::string name );
//constructors
		Zombie(std::string n);
		Zombie();
		~Zombie();
};