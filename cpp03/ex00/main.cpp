/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:16 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/25 14:11:03 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("abdo");
    ClapTrap clap1("jafy");
    
    clap.attack(clap1.get_name());
    clap1.takeDamage(clap.get_attack_damage());
    clap.status();
    clap1.status();
    clap.beRepaired(5);
    clap.status();
    
    std::cout << "**********************" << std::endl;
    
    clap1.attack(clap.get_name());
    clap.takeDamage(clap1.get_attack_damage());
    clap.status();
    clap1.status();
}