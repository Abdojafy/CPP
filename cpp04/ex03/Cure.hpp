/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:33:16 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:39:06 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"

class Cure: public AMateria
{

public:
	Cure();
	Cure(std::string const & type);
	~Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);
	AMateria* clone() const ;
	void	use(ICharacter& target);
};

#endif