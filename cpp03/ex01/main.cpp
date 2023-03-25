/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:31:16 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/25 14:09:47 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap *clap;
    ScavTrap Scav("abdo");
    ScavTrap Scav1("jafy");
    
    clap = &Scav;
    clap->attack(Scav1.get_name());
    Scav1.takeDamage(clap->get_attack_damage());
    clap->status();
    Scav1.status();
    Scav1.guardGate();
}