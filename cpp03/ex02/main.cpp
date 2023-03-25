/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:16 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/25 14:37:25 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap *clap;
    FragTrap Frag("Abdo");
    FragTrap Frag1("jafy");
    
    clap = &Frag;
    clap->attack(Frag1.get_name());
    Frag1.takeDamage(clap->get_attack_damage());
    clap->status();
    Frag1.status();
    Frag1.beRepaired(10);
    clap->status();
    Frag1.status();
    Frag.highFivesGuys();
}