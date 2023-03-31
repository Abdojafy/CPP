/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:19:24 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 20:05:57 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(std::string _type);
	~Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	void	makeSound() const;
};

#endif