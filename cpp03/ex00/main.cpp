/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:16 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/24 20:53:06 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapp;
    ClapTrap clap("abdo");
    ClapTrap clap1("jafy");
    
    clapp.attack("jafy");
    clap.attack("jafy");
    clap1.takeDamage(clap.get_attack_damage());
    clap.beRepaired(5);
    
    clap1.attack("abdo");
    clap.takeDamage(clap1.get_attack_damage());
}