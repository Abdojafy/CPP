/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:01:07 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/26 20:06:31 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string _type);
	~WrongCat();
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& obj);
	void	makeSound() const;
};

#endif