/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:12:33 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/28 16:26:30 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>
#include<string>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(std::string idea);
	~Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	std::string getIdea(int i) const;
	void	setIdea(std::string _idea, int i);
};

#endif