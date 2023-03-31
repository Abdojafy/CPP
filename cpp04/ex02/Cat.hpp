/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:19:24 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/27 15:59:41 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat: public Animal
{
private:
	Brain* brain;	
public:
	Cat();
	Cat(std::string _type);
	~Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	void	makeSound() const;
	Brain* getBrain() const;
	void	setBrain(Brain* _brain);
};

#endif