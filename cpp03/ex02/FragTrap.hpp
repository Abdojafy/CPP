/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:15:56 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/25 11:15:56 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(const FragTrap &obj);
	~FragTrap();
	void attack(const std::string& target);
	FragTrap& operator=(const FragTrap& obj);
    void highFivesGuys(void);
};

#endif