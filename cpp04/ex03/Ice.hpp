/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:32:42 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/29 18:39:03 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include"AMateria.hpp"

class Ice: public AMateria
{

public:
	Ice();
	Ice(std::string const & type);
	~Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);
	AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif