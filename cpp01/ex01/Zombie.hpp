/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:37:18 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/12 02:41:48 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

class Zombie
{
	private:
		std::string name;
	public:
		void	announce( void );
		Zombie* newZombie( std::string name );
		void 	randomChump( std::string name );
		Zombie* zombieHorde( int N, std::string name );
		Zombie* zombieHorde_( int N, std::string name );

//constructors
		Zombie(std::string n);
		Zombie();
		~Zombie();
};